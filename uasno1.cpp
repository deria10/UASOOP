#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;

public:
    // Constructor
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    // Method untuk menampilkan informasi lengkap buku
    void displayInfo() {
        cout << "Judul: " << title << endl;
        cout << "Penulis: " << author << endl;
        cout << "Tahun Terbit: " << year << endl;
    }

    // Method untuk menentukan apakah buku "kuno" atau tidak
    bool isAntique() {
        return year < 2000;
    }
};

int main() {
    // Membuat objek dari class Book
    Book book1("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997);

    // Menampilkan informasi lengkap buku beserta status "kuno" atau tidak
    book1.displayInfo();
    if (book1.isAntique()) {
        cout << "Status: Kuno" << endl;
    } else {
        cout << "Status: Tidak Kuno" << endl;
    }

    return 0;
}