#include <iostream>
#include <string>
#include <iomanip> // Untuk mengatur format uang

using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    // Constructor
    BankAccount(string owner, double balance) {
        this->owner = owner;
        this->balance = balance;
    }

    // Method untuk melakukan penyetoran uang
    void deposit(double amount) {
        balance += amount;
        cout << "Berhasil melakukan penyetoran sebesar Rp " << fixed << setprecision(2) << amount << endl;
    }

    // Method untuk melakukan penarikan uang
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Berhasil melakukan penarikan sebesar Rp " << fixed << setprecision(2) << amount << endl;
        } else {
            cout << "Saldo tidak mencukupi untuk melakukan penarikan sebesar Rp " << fixed << setprecision(2) << amount << endl;
        }
    }

    // Method untuk menampilkan saldo terkini
    void displayBalance() {
        cout << "Saldo terkini untuk pemilik " << owner << ": Rp " << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    // Membuat objek dari class BankAccount dengan saldo awal Rp 1000000
    BankAccount account("Deri Afandi", 1000000.0);

    // Melakukan beberapa penyetoran dan penarikan uang
    account.deposit(500000.0);
    account.withdraw(200000.0);
    account.withdraw(1500000.0); // Mencoba penarikan melebihi saldo

    // Menampilkan saldo terkini
    account.displayBalance();

    return 0;
}
