#pragma once
#include <iostream>
#include <string>
#include "kendaraan.cpp"

using namespace std;

class Mobil : public Kendaraan
{
private:
    int doors;
    string fuelType;

public:
    Mobil()
    {

    }

    Mobil(string b, string m, int y, double p, int d, string f): Kendaraan(b, m, y, p)
    {
        this->doors = d;
        this->fuelType = f;
    }

    void setJumlahpintu(int doors)
    {
        this->doors = doors;
    }


    void setfuelType(string fuelType)
    {
        this->fuelType = fuelType;
    }

    int getdoors()
    {
        return this->doors;
    }

    string getfuelType()
    {
        return this->fuelType;
    }

    ~Mobil()
    {

    }
};
