#pragma once
#include <iostream>
#include <string>
#include "kendaraan.cpp"

using namespace std;

class Truck : public Kendaraan
{
private:
    int kapasitas;
    bool gerbong;

public:
    Truck()
    {

    }

    Truck(string b, string m, int y, double p,  int c, bool ta): Kendaraan(b, m, y, p)
    {
        this->kapasitas = c;
        this->gerbong = ta;
    }

    void setkapasitas(int kapasitas)
    {
        this->kapasitas = kapasitas;
    }


    void setgerbong(bool gerbong)
    {
        this->gerbong = gerbong;
    }

    int getgerbong()
    {
        return this->gerbong;
    }


    float getkapasitas()
    {
        return this->kapasitas;
    }

    ~Truck()
    {

    }
};
