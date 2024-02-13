#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double score;

public:
    // Constructor
    Student(string name, int age, double score) {
        this->name = name;
        this->age = age;
        this->score = score;
    }

    // Method untuk menampilkan informasi lengkap mahasiswa
    void displayInfo() {
        cout << "Nama: " << name << endl;
        cout << "Usia: " << age << " tahun" << endl;
        cout << "Nilai: " << score << endl;
    }
};

int main() {
    // Membuat objek dari class Student
    Student student("Deri Afandi", 19, 90.5);

    // Menampilkan informasi lengkap mahasiswa
    student.displayInfo();

    return 0;
}
