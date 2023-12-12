//
// Created by Egor on 12.12.2023.
//

#include "Car.h"
#include "Customer.h"
Car::Car(std::string brand, std::string model, int year, int power, int mileage, bool registration, std::string status)
{
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->power = power;
    this->mileage = mileage;
    this->registration = registration;
    this->status = status;
}

Car::Car(Car const &other) //copy constructor
{
    brand = other.brand;
    model = other.model;
    model = other.model;
    year = other.year;
    power = other.power;
    mileage = other.mileage;
    registration = other.registration;
    status = other.status;
}

Car& Car::operator=(const Car &other) //operator of appropriation
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


//Renting
double Car::get_rent_price()
{
    double price = this->rent_price;
    if (this->get_power() > 100)
        return price * 1.3;
    else if (this->get_power() < 100)
        return price * 0.9;
    else
        return price * 1.1;

}

void Car::to_rent(Customer &cust)
{
    if (this->get_registration())
    {
        cust.set_bill(cust.get_bill() + this->get_rent_price());
        std::string car = this->get_brand() + " " + this->get_model();
        cust.set_vehicle(car);
        this->set_status("Rented");
        std::cout << cust.get_name() << " rented Car \"" << car <<
        "\" for " << this->get_rent_price() << "." << std::endl;
    }
    else
        std::cout << "Car can't be rented because it it doesn't have registration." << std::endl;
}