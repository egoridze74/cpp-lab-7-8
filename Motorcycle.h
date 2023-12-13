//
// Created by Egor on 12.12.2023.
//

#ifndef CPP_LAB_7_8_MOTORCYCLE_H
#define CPP_LAB_7_8_MOTORCYCLE_H
#include "Vehicle.h"
#include "Customer.h"

class Motorcycle : public Vehicle
{
private:
    static const int rent_price = 1500;

public:
//Constructors, destructor
    Motorcycle(); //default constructor

    Motorcycle(std::string brand, std::string model, unsigned int year, unsigned int power, unsigned int mileage, std::string registration, std::string status);

    Motorcycle(const Motorcycle &); //copy constructor

    ~Motorcycle() //destructor
    {};

    Motorcycle& operator=(const Motorcycle &other); //operator of appropriation
    //Renting
    double get_rent_price() const;
    void to_rent(Customer &cust);
};


#endif //CPP_LAB_7_8_MOTORCYCLE_H
