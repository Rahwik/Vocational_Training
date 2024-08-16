#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Book {
private:
    int i;
    string t;
    string a;

public:
    Book(int i, string t, string a) : i(i), t(t), a(a) {}

    int getId() const { return i; }
    string getTitle() const { return t; }
    string getAuthor() const { return a; }
};

class Library {
private:
    vector<Book> b;

public:
    void addBook(const Book& bk) { b.push_back(bk); }

    Book findBookById(int i) {
        for (const auto& bk : b) {
            if (bk.getId() == i) {
                return bk;
            }
        }
        return Book(-1, "Not Found", "N/A");
    }

    Book findBookByAuthor(const string& a) {
        for (const auto& bk : b) {
            if (bk.getAuthor() == a) {
                return bk;
            }
        }
        return Book(-1, "Not Found", "N/A");
    }
};

int main() {
    Library l;

    l.addBook(Book(1, "Advance Cpp", "Rahul"));
    l.addBook(Book(2, "Django master", "Prasad"));
    l.addBook(Book(3, "Flask basic", "Myself"));

    Book bk1 = l.findBookById(2);
    if (bk1.getId() != -1) {
        cout << "Book found: " << bk1.getTitle() << " by " << bk1.getAuthor() << endl;
    } else {
        cout << "Book not found" << endl;
    }

    Book bk2 = l.findBookByAuthor("Rahul");
    if (bk2.getId() != -1) {
        cout << "Book found: " << bk2.getTitle() << " by " << bk2.getAuthor() << endl;
    } else {
        cout << "Book not found" << endl;
    }

    return 0;
}
//book{author,avaiability(bool),title}
//library{borrow book,details of books,get the title}