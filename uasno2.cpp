#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    int year;
    int speed;

public:
    // Constructor
    Car(string brand, int year, int speed) {
        this->brand = brand;
        this->year = year;
        this->speed = speed;
    }

    // Method untuk menghitung waktu yang dibutuhkan untuk menempuh jarak tertentu berdasarkan kecepatan
    double calculateTime(double distance) {
        return distance / speed;
    }
};

int main() {
    // Membuat objek dari class Car
    Car car("Toyota", 2020, 60);

    // Menghitung waktu yang dibutuhkan untuk menempuh jarak 100 km dengan kecepatan 60 km/jam
    double distance = 100.0;
    double time = car.calculateTime(distance);

    // Menampilkan waktu yang dibutuhkan
    cout << "Waktu yang dibutuhkan untuk menempuh jarak " << distance << " km adalah " << time << " jam" << endl;

    return 0;
}
