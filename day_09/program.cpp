#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book
{
private:
    string author;
    string title;
    bool available;
    string type;

public:
    Book(string a, string t, bool av, string ty) : author(a), title(t), available(av), type(ty) {}

    string getAuthor() const { return author; }
    string getTitle() const { return title; }
    bool isAvailable() const { return available; }
    string getType() const { return type; }

    void borrowBook()
    {
        if (available)
        {
            available = false;
            cout << "Book borrowed: " << title << " (" << type << ")" << endl;
        }
        else
        {
            cout << "Book is not available" << endl;
        }
    }

    void returnBook()
    {
        available = true;
        cout << "Book returned: " << title << " (" << type << ")" << endl;
    }

    void printDetails() const
    {
        cout << "Title: " << title << ", Author: " << author
             << ", Type: " << type
             << ", Available: " << (available ? "Yes" : "No") << endl;
    }
};

class Library
{
private:
    vector<Book> books;

public:
    Library() { cout << "Welcome to the Library!" << endl; }
    ~Library() { cout << "Library cleanup before exit." << endl; }

    void addBook(const string &author, const string &title, const string &type)
    {
        books.push_back(Book(author, title, true, type));
    }

    void listAvailability() const
    {
        for (const auto &b : books)
        {
            b.printDetails();
        }
    }

    void borrowBookByTitle(const string &title)
    {
        for (auto &b : books)
        {
            if (b.getTitle() == title)
            {
                b.borrowBook();
                return;
            }
        }
        cout << "Book not found: " << title << endl;
    }
};

int main()
{
    Library lib;
    int numBooks;
    cout << "How many books would you like to add to the library? ";
    cin >> numBooks;

    for (int i = 0; i < numBooks; ++i)
    {
        string author, title, type;
        cout << "Enter the author of book " << i + 1 << ": ";
        cin.ignore();
        getline(cin, author);

        cout << "Enter the title of book " << i + 1 << ": ";
        getline(cin, title);

        cout << "Enter the type of book " << i + 1 << " (Audio/Hardcover): ";
        getline(cin, type);

        lib.addBook(author, title, type);
    }

    lib.listAvailability();

    string borrowTitle;
    cout << "Enter the title of the book you want to borrow: ";
    getline(cin, borrowTitle);

    lib.borrowBookByTitle(borrowTitle);

    return 0;
}