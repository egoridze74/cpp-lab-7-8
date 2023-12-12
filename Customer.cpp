//
// Created by Egor on 12.12.2023.
//

#include "Customer.h"
//Constructors, destructor
Customer::Customer() //default constructor
{
    name = "Unknown";
    vehicle = "No car";
    bill = 0;

}

Customer::Customer(std::string name, std::string vehicle, double bill)
{
    this->name = name;
    this->vehicle = vehicle;
    this->bill = bill;
}

Customer::Customer(const Customer &other) //copy constuctor
{
    this->name = other.name;
    this->vehicle = other.vehicle;
    this->bill = other.bill;
}

Customer& Customer::operator=(const Customer &other) //operator of appropriation
{
    this->name = other.name;
    this->vehicle = other.vehicle;
    this->bill = other.bill;
}
