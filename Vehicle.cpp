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
    registration = false;
    status = "Not rented";
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


//Output
std::ostream & operator<<(std::ostream &out, const Vehicle &v)
{
    if (v.get_brand() == "Unknown")
        out << "Unknown vehicle";
    else {
        out << "Brand: " << v.get_brand() << std::endl;
        out << "Model: " << v.get_model() << std::endl;
        out << "Year of manufacture: " << v.get_year() << std::endl;
        out << "Power of the engine: " << v.get_power() << std::endl;
        out << "Mileage of vehcle: " << v.get_mileage() << std::endl;
        if (v.get_registration())
            out << "Vehicle is registered" << std::endl;
        else
            out << "Vehicle is NOT registered" << std::endl;
        out << "Status: " << v.get_status() << std::endl;
    }
    return out;
}
