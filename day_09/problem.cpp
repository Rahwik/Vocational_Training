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
    Book(string a, string t, bool av, string ty) : author(a), title(t, av), available(av), type(ty) {}

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

    lib.addBook("Rahul", "Advance Cpp", "Hardcover");
    lib.addBook("Prasad", "Django Master", "Audio");
    lib.addBook("Myself", "Flask Basic", "Hardcover");

    lib.listAvailability();

    lib.borrowBookByTitle("Django Master");
    lib.borrowBookByTitle("Advance Cpp");

    return 0;
}
