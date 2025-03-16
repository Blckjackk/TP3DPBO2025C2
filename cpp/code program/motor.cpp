#pragma once
#include <iostream>
#include <string>
#include "kendaraan.cpp"

using namespace std;

class Motorcycle : public Kendaraan
{
private:
    string type;
    bool hasWindshield;

public:
    Motorcycle()
    {

    }

    Motorcycle(string b, string m, int y, double p, string t, bool hw): Kendaraan(b, m, y, p)
    {
        this->type = t;
        this->hasWindshield = hw;
    }

    void setType(string type)
    {
        this->type = type;
    }


    void setHasWindshield(bool hasWindshield)
    {
        this->hasWindshield = hasWindshield;
    }

    string getType()
    {
        return this->type;
    }


    bool getHasWindshield()
    {
        return this->hasWindshield;
    }

    ~Motorcycle()
    {

    }
};
