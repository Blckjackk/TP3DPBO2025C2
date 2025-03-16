#pragma once
#include <bits/stdc++.h> // library standar dari C++
#include "kendaraan.cpp"
#include "motor.cpp"
#include "mobil.cpp"
#include "truck.cpp"

using namespace std;

class Showroom {
private:
    string nama, lokasi;
    vector<Truck> truk;
    vector<Motorcycle> motor;
    vector<Mobil> mobil;

public:
    // Constructor
    Showroom(string n, string l) {
        this->nama = n;
        this->lokasi = l;
    }

    // Getter
    string getNama() { return this->nama; }
    string getLokasi() { return this->lokasi; }
    vector<Truck> getTrucks() { return this->truk; }
    vector<Motorcycle> getMotorcycles() { return this->motor; }
    vector<Mobil> getCars() { return this->mobil; }

    // Setter
    void setNama(string n) { nama = n; }
    void setLokasi(string l) { lokasi = l; }

    // Menambahkan kendaraan ke showroom
    void addTruck(Truck t) { truk.push_back(t); }
    void addMotorcycle(Motorcycle m) { motor.push_back(m); }
    void addCar(Mobil m) { mobil.push_back(m); }

    // Cetak daftar motor
    void printMotorcycles() {
        cout << "Daftar Motor di Showroom " << nama << ":\n";
        if (motor.empty()) {
            cout << "Tidak ada motor di showroom.\n";
            return;
        }
        for (int i = 0; i < motor.size(); i++) {
            cout << "Motor " << i + 1 << ":\n";
            cout << "Brand : " << motor[i].getbrand() << endl;
            cout << "Model : " << motor[i].getmodel() << endl;
            cout << "Year : " << motor[i].getyear() << endl;
            cout << "Price : " << motor[i].getprice() << endl;
            cout << "Type : " << motor[i].getType() << endl;
            cout << "Has Windshield : " << (motor[i].getHasWindshield() ? "Yes" : "No") << endl;
            cout << "--------------------\n";
        }
    }

    // Cetak daftar truk
    void printTrucks() {
        cout << "Daftar Truk di Showroom " << nama << ":\n";
        if (truk.empty()) {
            cout << "Tidak ada truk di showroom.\n";
            return;
        }
        for (int i = 0; i < truk.size(); i++) {
            cout << "Truk #" << i + 1 << ":\n";
            cout << "Brand : " << truk[i].getbrand() << endl;
            cout << "Model : " << truk[i].getmodel() << endl;
            cout << "Year : " << truk[i].getyear() << endl;
            cout << "Price : " << truk[i].getprice() << endl;
            cout << "Kapasitas : " << truk[i].getkapasitas() << " ton" << endl;
            cout << "Gerbong : " << truk[i].getgerbong() << endl;
            cout << "--------------------\n";
        }
    }

    // Cetak daftar mobil
    void printCars() {
        cout << "Daftar Mobil di Showroom " << nama << ":\n";
        if (mobil.empty()) {
            cout << "Tidak ada mobil di showroom.\n";
            return;
        }
        for (int i = 0; i < mobil.size(); i++) {
            cout << "Mobil #" << i + 1 << ":\n";
            cout << "Brand : " << mobil[i].getbrand() << endl;
            cout << "Model : " << mobil[i].getmodel() << endl;
            cout << "Year : " << mobil[i].getyear() << endl;
            cout << "Price : " << mobil[i].getprice() << endl;
            cout << "Doors : " << mobil[i].getdoors() << endl;
            cout << "Fuel Type : " << mobil[i].getfuelType() << endl;
            cout << "--------------------\n";
        }
    }

    // Cetak semua kendaraan di showroom
    void printAllVehicles() {
        cout << "Showroom: " << nama << " | Lokasi: " << lokasi << "\n";
        cout << "=================================\n";
        printMotorcycles();
        cout << "\n";
        printTrucks();
        cout << "\n";
        printCars();
        cout << "=================================\n";
    }

    // Destructor
    ~Showroom() {
        cout << "Showroom " << nama << " dihapus\n";
    }
};
