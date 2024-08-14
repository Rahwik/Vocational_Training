// book{author,avaiability(bool),title,(this keyword using values), void borrow book(condition avaial),void return book(show it is avaible),string details of books,bool check the avaiability,method to get the title,method to get the author}
// library{welcome to libraray message, destructor for library clean up before starting, add new book to libraray along with author, title, and id ,method of list of  avaiability of book and print it when checked ,method to borrow the book by its title}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book
{
private:
    int id;
    string title;
    string author;
    bool available;

public:
    Book(int id, string title, string author, bool available)
        : id(id), title(title), author(author), available(available) {}

    int getId() const { return id; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool isAvailable() const { return available; }

    void borrowBook()
    {
        if (available)
        {
            available = false;
            cout << "Book borrowed: " << title << endl;
        }
        else
        {
            cout << "Book is not available" << endl;
        }
    }

    void printDetails() const
    {
        cout << "Title: " << title << ", Author: " << author
             << ", Available: " << (available ? "Yes" : "No") << endl;
    }
};

class Library
{
private:
    vector<Book> books;

public:
    void welcomeMessage() const
    {
        cout << "Welcome to the Library!" << endl;
    }

    void addBook(const Book &book)
    {
        books.push_back(book);
    }

    Book findBookById(int id) const
    {
        for (const auto &book : books)
        {
            if (book.getId() == id)
            {
                return book;
            }
        }
        return Book(-1, "Not Found", "N/A", false);
    }

    Book findBookByAuthor(const string &author) const
    {
        for (const auto &book : books)
        {
            if (book.getAuthor() == author)
            {
                return book;
            }
        }
        return Book(-1, "Not Found", "N/A", false);
    }
};

int main()
{
    Library lib;
    lib.welcomeMessage();

    lib.addBook(Book(1, "Advance Cpp", "Rahul", true));
    lib.addBook(Book(2, "Django Master", "Prasad", true));
    lib.addBook(Book(3, "Flask Basic", "Myself", false));

    Book bk1 = lib.findBookById(2);
    bk1.printDetails();
    bk1.borrowBook();

    Book bk2 = lib.findBookByAuthor("Rahul");
    bk2.printDetails();
    bk2.borrowBook();

    return 0;
}
