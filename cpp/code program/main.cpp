#include <bits/stdc++.h> // library standar dari C++
#include "kendaraan.cpp"
#include "showroom.cpp"
#include "truck.cpp"
#include "mobil.cpp"
#include "motor.cpp"

int main() {
    // Membuat objek kendaraan secara dinamis
    Mobil mobil("Toyota", "Camry", 2022, 500000000, 4, "Bensin");
    Mobil mobil1("Mahaya", "kembric", 2023, 400000, 6, "Solar");
    Motorcycle motor("Yamaha", "R15", 2021, 35000000, "Enak", true);
    Motorcycle motor2("Yamaha", "R25", 2022, 35000000, "Yoi", true);
    Motorcycle motor3("Yamaha", "R35", 2025, 35000000, "Sport", true);
    Truck truk("Dino", "Butro", 2022, 650000000, 3, true);
    Truck truk1("Hino", "Dutro", 2020, 700000000, 5, true);

    // Membuat showroom
    Showroom myShowroom("Blackjack Showroom", "Bandung");
    cout << "Isi showroom" << myShowroom.getNama() << endl;


    // Menambahkan kendaraan ke showroom
    myShowroom.addCar(mobil);
    myShowroom.addCar(mobil1);
    myShowroom.addMotorcycle(motor);
    myShowroom.addMotorcycle(motor2);
    myShowroom.addMotorcycle(motor3);
    myShowroom.addTruck(truk);
    myShowroom.addTruck(truk1);

    cout << "Isi showroom" << myShowroom.getNama() << endl;
    myShowroom.printAllVehicles();



    return 0;
}
