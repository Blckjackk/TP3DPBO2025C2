#pragma once
#include <iostream>
#include <string>


using namespace std;


class Kendaraan {
private:
    string brand;
    string model;
    int year;
    double price;
public:
    Kendaraan()
    {

    }

    Kendaraan(string brand, string model, int year, double price)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
    }


    void setbrand(string brand)
    {
        this->brand = brand;
    }

    void setmodel(string model)
    {
        this->model = model;
    }

    void setyear(int year)
    {
        this->year = year;
    }

    void setprice(double price)
    {
        this->price = price;
    }


    string getbrand()
    {
        return brand;
    }
    
    string getmodel()
    {
        return model;
    }

    int getyear()
    {
        return year;
    }

    double getprice()
    {
        return price;
    }


    ~Kendaraan()
    {




    }
};
