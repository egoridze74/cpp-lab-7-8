//
// Created by Egor on 12.12.2023.
//

#include "Truck.h"
#include "Customer.h"
Truck::Truck() //default constructor
{
    brand = "Unknown";
    model = "Unknown";
    year = 0;
    power = 0;
    mileage = 0;
    registration = false;
    status = "NotRented";
}

Truck::Truck(std::string brand, std::string model, unsigned int year, unsigned int power, unsigned int mileage, std::string registration, std::string status)
{
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->power = power;
    this->mileage = mileage;
    this->registration = registration;
    this->status = status;
}

Truck::Truck(Truck const &other) //copy constructor
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

Truck& Truck::operator=(const Truck &other) //operator of appropriation
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
double Truck::get_rent_price() const
{
    double price = this->rent_price;
    if (this->get_power() > 100)
        return price * 1.35;
    else if (this->get_power() < 100)
        return price * 0.8;
    else
        return price * 1;

}

void Truck::to_rent(Customer &cust)
{
    if (this->get_registration() == "true" && this->get_status() != "Rented")
    {
        cust.set_bill(cust.get_bill() + this->get_rent_price());
        std::string truck = this->get_brand() + " " + this->get_model();
        cust.set_vehicle(truck);
        this->set_status("Rented");
        std::cout << cust.get_name() << " rented Truck \"" << truck <<
                  "\" for " << this->get_rent_price() << " per day." << std::endl;
    }
    else
        std::cout << "Truck can't be rented." << std::endl;
}