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
    return *this;
}


//Input, output
std::istream& operator>>(std::istream &in, Customer &c)
{
    std::string name;
    double bill;
    in >> name >> bill;
    c.set_name(name);
    c.set_bill(bill);
    return in;
}

std::ostream & operator<<(std::ostream &out, const Customer &c)
{
    if (c.get_name() == "Unknown")
        out << "Unknown customer" << std::endl;
    else
    {
        out << "Customer's name: " << c.get_name() << std::endl;
        out << "Customer's vehicle: " << c.get_vehicle() << std::endl;
        out << "Customer's bill: " << c.get_bill() << std::endl;
    }
    return out;
}
