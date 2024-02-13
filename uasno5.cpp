#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double hourlyRate;
    double hoursWorked;

public:
    // Constructor
    Employee(string n, double rate, double hours) {
        name = n;
        hourlyRate = rate;
        hoursWorked = hours;
    }

    // Method untuk menghitung total gaji
    double calculateTotalSalary() {
        double totalSalary = hourlyRate * hoursWorked;
        return totalSalary;
    }

    // Getter untuk nama karyawan
    string getName() {
        return name;
    }
};

int main() {
    // Membuat objek dari kelas Employee
    Employee employee1("Deri Afandi", 10000, 40); // Nama: Deri Afandi, Gaji per jam: 2000, Jumlah jam kerja: 40

    // Menghitung total gaji karyawan
    double totalSalary = employee1.calculateTotalSalary();

    // Menampilkan total gaji
    cout << "Total gaji " << employee1.getName() << ": Rp" << totalSalary << endl;

    return 0;
}
