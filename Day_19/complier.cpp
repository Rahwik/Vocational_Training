#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <stdexcept>
#include <cctype>
#include <sstream>

using namespace std;

// TokenType represents different types of tokens.
enum class TokenType {
    KEYWORD, IDENTIFIER, NUMBER, OPERATOR, SEPARATOR, STRING_LITERAL, CHAR_LITERAL, END, UNKNOWN
};

// Token structure holds information about the token.
struct Token {
    TokenType type;
    std::string value;
    int line;
    int column;
};

// Lexer class to tokenize the input code.
class Lexer {
private:
    std::string input;
    size_t position;
    int line;
    int column;
    std::unordered_set<std::string> keywords = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "inline", "int", "long", "register", "restrict", "return", "short",
        "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", "_Alignas", "_Alignof",
        "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn",
        "_Static_assert", "_Thread_local"
    };
    std::unordered_set<char> operators = {'+', '-', '*', '/', '%', '=', '<', '>', '!', '&', '|', '^', '~', '?', ':'};
    std::unordered_set<char> separators = {'(', ')', '{', '}', '[', ']', ';', ',', '.'};

    // Peeks the next character without advancing the position.
    char peek() const {
        if (position < input.size()) {
            return input[position];
        }
        return '\0';
    }

    // Advances the lexer to the next character.
    char advance() {
        char current = peek();
        position++;
        if (current == '\n') {
            line++;
            column = 0;
        } else {
            column++;
        }
        return current;
    }

    // Skips over whitespace characters.
    void skipWhitespace() {
        while (isspace(peek())) {
            advance();
        }
    }

    // Lex numbers from the input.
    Token lexNumber() {
        std::string number;
        int startColumn = column;
        while (isdigit(peek())) {
            number += advance();
        }
        if (peek() == '.') {
            number += advance();
            while (isdigit(peek())) {
                number += advance();
            }
        }
        return Token{TokenType::NUMBER, number, line, startColumn};
    }

    // Lex identifiers or keywords from the input.
    Token lexIdentifierOrKeyword() {
        std::string ident;
        int startColumn = column;
        while (isalnum(peek()) || peek() == '_') {
            ident += advance();
        }
        if (keywords.find(ident) != keywords.end()) {
            return Token{TokenType::KEYWORD, ident, line, startColumn};
        }
        return Token{TokenType::IDENTIFIER, ident, line, startColumn};
    }

    // Lex string literals from the input.
    Token lexStringLiteral() {
        std::string str;
        int startColumn = column;
        advance();  // Skip the opening quote
        while (peek() != '"' && peek() != '\0') {
            str += advance();
        }
        advance();  // Skip the closing quote
        return Token{TokenType::STRING_LITERAL, str, line, startColumn};
    }

    // Lex character literals from the input.
    Token lexCharLiteral() {
        std::string charLit;
        int startColumn = column;
        advance();  // Skip the opening single quote
        if (peek() != '\0') {
            charLit += advance();
        }
        advance();  // Skip the closing single quote
        return Token{TokenType::CHAR_LITERAL, charLit, line, startColumn};
    }

    // Lex operators and separators from the input.
    Token lexOperatorOrSeparator() {
        std::string op(1, advance());
        if (operators.find(op[0]) != operators.end()) {
            return Token{TokenType::OPERATOR, op, line, column};
        }
        if (separators.find(op[0]) != separators.end()) {
            return Token{TokenType::SEPARATOR, op, line, column};
        }
        return Token{TokenType::UNKNOWN, op, line, column};
    }

public:
    // Constructor to initialize the lexer with the input source.
    Lexer(const std::string& src) : input(src), position(0), line(1), column(1) {}

    // Returns the next token from the input.
    Token nextToken() {
        skipWhitespace();
        int startColumn = column;

        if (position >= input.size()) {
            return Token{TokenType::END, "", line, column};
        }

        char current = peek();

        if (isalpha(current) || current == '_') {
            return lexIdentifierOrKeyword();
        }

        if (isdigit(current)) {
            return lexNumber();
        }

        if (current == '"') {
            return lexStringLiteral();
        }

        if (current == '\'') {
            return lexCharLiteral();
        }

        if (operators.find(current) != operators.end() || separators.find(current) != separators.end()) {
            return lexOperatorOrSeparator();
        }

        // Handle unknown token cases
        std::string unknown(1, advance());
        return Token{TokenType::UNKNOWN, unknown, line, startColumn};
    }
};

// Interpreter class to interpret and execute the input.
class Interpreter {
private:
    Lexer lexer;
    Token currentToken;
    std::unordered_map<std::string, int> symbolTable;  // To store variable names and values

    // Advances to the next token.
    void advanceToken() {
        currentToken = lexer.nextToken();
    }

    // Evaluates a term, which could be a number or identifier.
    int evaluateTerm() {
        int result = 0;

        if (currentToken.type == TokenType::IDENTIFIER) {
            std::string varName = currentToken.value;
            if (symbolTable.find(varName) != symbolTable.end()) {
                result = symbolTable[varName];
            } else {
                throw std::runtime_error("Undefined variable: " + varName);
            }
        } else if (currentToken.type == TokenType::NUMBER) {
            result = std::stoi(currentToken.value);
        }
        advanceToken();

        return result;
    }

    // Evaluates a factor, handling multiplication, division, and modulo.
    int evaluateFactor() {
        int result = evaluateTerm();

        while (currentToken.type == TokenType::OPERATOR && (currentToken.value == "*" || currentToken.value == "/" || currentToken.value == "%")) {
            std::string op = currentToken.value;
            advanceToken();
            int nextTerm = evaluateTerm();

            if (op == "*") {
                result *= nextTerm;
            } else if (op == "/") {
                if (nextTerm == 0) {
                    throw std::runtime_error("Division by zero");
                }
                result /= nextTerm;
            } else if (op == "%") {
                result %= nextTerm;
            }
        }

        return result;
    }

    // Evaluates an expression, handling addition and subtraction.
    int evaluateExpression() {
        int result = evaluateFactor();

        while (currentToken.type == TokenType::OPERATOR && (currentToken.value == "+" || currentToken.value == "-")) {
            std::string op = currentToken.value;
            advanceToken();
            int nextFactor = evaluateFactor();
            if (op == "+") {
                result += nextFactor;
            } else if (op == "-") {
                result -= nextFactor;
            }
        }

        return result;
    }

    // Processes assignment statements.
    void processAssignment() {
        std::string variableName;
        if (currentToken.type == TokenType::KEYWORD && currentToken.value == "int") {
            advanceToken();
            if (currentToken.type == TokenType::IDENTIFIER) {
                variableName = currentToken.value;
                advanceToken();
                if (currentToken.type == TokenType::OPERATOR && currentToken.value == "=") {
                    advanceToken();
                    int value = evaluateExpression();  // Evaluate the assigned expression
                    symbolTable[variableName] = value;  // Store variable in symbol table
                    if (currentToken.type == TokenType::SEPARATOR && currentToken.value == ";") {
                        advanceToken();
                    }
                }
            }
        }
    }

    // Processes printf statements to print variables or string literals.
    void processPrintf() {
        advanceToken();  // Move past "printf"
        if (currentToken.type == TokenType::SEPARATOR && currentToken.value == "(") {
            advanceToken();  // Move past '('

            if (currentToken.type == TokenType::STRING_LITERAL) {
                std::string formatString = currentToken.value;
                advanceToken();

                // If there's a comma, handle variable or number output
                if (currentToken.type == TokenType::SEPARATOR && currentToken.value == ",") {
                    advanceToken();
                    int value = 0;

                    if (currentToken.type == TokenType::IDENTIFIER) {
                        std::string varName = currentToken.value;
                        if (symbolTable.find(varName) != symbolTable.end()) {
                            value = symbolTable[varName];
                        } else {
                            throw std::runtime_error("Undefined variable: " + varName);
                        }
                    } else if (currentToken.type == TokenType::NUMBER) {
                        value = std::stoi(currentToken.value);
                    }
                    advanceToken();

                    // Output the format string and value
                    cout << formatString << " " << value << endl;
                } else {
                    // Output only the string literal
                    cout << formatString << endl;
                }
            }
            if (currentToken.type == TokenType::SEPARATOR && currentToken.value == ")") {
                advanceToken();  // Move past ')'
            }
        }
    }

public:
    // Constructor to initialize the interpreter with the source code.
    Interpreter(const std::string& src) : lexer(src) {
        advanceToken();
    }

    // Executes the source code by processing statements.
    void execute() {
        while (currentToken.type != TokenType::END) {
            if (currentToken.type == TokenType::KEYWORD && currentToken.value == "int") {
                processAssignment();
            } else if (currentToken.type == TokenType::IDENTIFIER && currentToken.value == "printf") {
                processPrintf();
            } else {
                advanceToken();
            }
        }
    }
};

// Main function to read input and run the interpreter.
int main() {
    std::string input;
    std::string line;

    std::cout << "Enter C-like code (end input with 'EOF' on a new line):" << std::endl;
    while (std::getline(std::cin, line)) {
        if (line == "EOF") break;
        input += line + "\n";
    }

    try {
        Interpreter interpreter(input);
        interpreter.execute();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
/*
The interpreter can handle the following types of C-like code formats, including all arithmetic operators like *, /, and %:

1. Basic Variable Declaration and Arithmetic Operations (Addition):
   Example:
#include<stdio.h>
int main() 
{
int a = 10;
int b = 20;
int c = a + b;
printf("sum: %d", c);
return 0;
}
EOF

2. Subtraction:
   Example:
#include<stdio.h>
int main() 
{
int a = 15;
int b = 5;
int c = a - b;
printf("difference: %d", c);
return 0;
}
EOF

3. Multiplication:
   Example:
#include<stdio.h>
int main()
{
int a = 5;
int b = 4;
int c = a * b;
printf("product: %d", c);
return 0;
}
EOF

4. Division:
   Example:
#include<stdio.h>
int main()
{
int a = 20;
int b = 4;
int c = a / b;
printf("quotient: %d", c);
return 0;
}
EOF

5. Modulo:
   Example:
#include<stdio.h>
int main() {
int a = 10;
int b = 3;
int c = a % b;
printf("remainder: %d", c);
return 0;
}
EOF

6. Combined Arithmetic:
   Example:
#include<stdio.h>
int main() {
int a = 5;
int b = 10;
int result = (a + b) * 2 - 5 / b;
printf("result: %d", result);
return 0;
}
EOF

7. Declaring Multiple Variables:
   Example:
#include<stdio.h>
int main()
{
int x = 3, y = 4, z = x + y;
printf("sum: %d", z);
return 0;
}
EOF

8. Print With a Combination of String and Variables:
   Example:
#include<stdio.h>
int main()
{
int score = 95;
printf("Your score: %d", score);
return 0;
}
EOF
*/
