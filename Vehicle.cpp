//
// Created by Egor on 10.12.2023.
//

#include "Vehicle.h"
#include <iostream>
#include <cstring>

//Constructors, destructor
Vehicle::Vehicle() //default constructor
{
    brand = "Unknown";
    model = "Unknown";
    year = 0;
    power = 0;
    mileage = 0;
    registration = "false";
    status = "NotRented";
}

Vehicle& Vehicle::operator=(const Vehicle &other) //operator of appropriation
{
    this->brand = other.brand;
    this->model = other.model;
    this->year = other.year;
    this->power = other.power;
    this->mileage = other.mileage;
    this->registration = other.registration;
    this->status = other.status;
    return *this;
}


//Input, output
std::istream& operator>>(std::istream &in, Vehicle &v)
{
    std::string brand, model, status;
    unsigned int year, power, mileage;
    std::string registration;
    in >> brand >> model >> year >> power >> mileage >> registration >> status;
    v.set_all(brand, model, year, power, mileage, registration, status);
    return in;
}

std::ostream & operator<<(std::ostream &out, const Vehicle &v)
{
    if (v.get_brand() == "Unknown")
        out << "Unknown vehicle";
    else {
        out << "Brand: " << v.get_brand() << std::endl;
        out << "Model: " << v.get_model() << std::endl;
        out << "Year of manufacture: " << v.get_year() << std::endl;
        out << "Power of the engine: " << v.get_power() << std::endl;
        out << "Mileage of vehicle: " << v.get_mileage() << std::endl;
        if (v.get_registration() == "true")
            out << "Vehicle is registered" << std::endl;
        else
            out << "Vehicle is NOT registered" << std::endl;
        out << "Status: " << v.get_status() << std::endl;
        if (v.get_status() == "NotRented" && v.get_registration() == "true")
            out << "Rent price: " << v.get_rent_price() << std::endl;
    }
    return out;
}
