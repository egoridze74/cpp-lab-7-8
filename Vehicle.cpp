//
// Created by Egor on 10.12.2023.
//

#include "Vehicle.h"
#include <iostream>
#include <cstring>

//Constructors, destructor
Vehicle::Vehicle() //default constructor
{
    brand = new char[0];
    model = new char[0];
    year = 0;
    power = 0;
    mileage = 0;
    status = new char[0];
}

Vehicle::Vehicle(char *brand, char *model, int year, int power, int mileage, char *status)
{
    this->brand = new char[std::strlen(brand)];
    std::strcpy(this->brand, brand);
    this->model = new char[std::strlen(model)];
    std::strcpy(this->model, model);
    this->year = year;
    this->power = power;
    this->mileage = mileage;
    this->status = new char[std::strlen(status)];
    std::strcpy(this->status, status);
}

Vehicle::Vehicle(Vehicle const &other) //copy constructor
{
    brand = new char[std::strlen(other.brand)];
    std::strcpy(brand, other.brand);
    model = other.model;
    model = new char[std::strlen(other.model)];
    std::strcpy(model, other.model);
    year = other.year;
    power = other.power;
    mileage = other.mileage;
    status = other.status;
    status = new char[std::strlen(other.status)];
    std::strcpy(status, other.status);
}

Vehicle::~Vehicle() //destructor
{
    delete[] brand;
    delete[] model;
    delete[] status;
}

Vehicle& Vehicle::operator=(const Vehicle &other)
{
    delete[] this->brand;
    delete[] this->model;
    delete[] this->status;

    this->brand = new char[std::strlen(other.brand)];
    std::strcpy(brand, other.brand);
    this->model = new char[std::strlen(other.model)];
    std::strcpy(model, other.model);
    this->year = other.year;
    this->power = other.power;
    this->mileage = other.mileage;
    this->status = new char[std::strlen(other.status)];
    std::strcpy(status, other.status);

    return *this;
}