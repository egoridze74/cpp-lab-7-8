//
// Created by Egor on 12.12.2023.
//

#ifndef CPP_LAB_7_8_TRUCK_H
#define CPP_LAB_7_8_TRUCK_H
#include "Vehicle.h"
#include "Customer.h"

class Truck : public Vehicle
{
private:
    static const int rent_price = 2500;

public:
    //Constructors, destructor
    Truck(); //default constructor

    Truck(std::string brand, std::string model, int year, int power, int mileage, bool registration, std::string status);

    Truck(const Truck &); //copy constructor

    ~Truck() //destructor
    {};

    Truck& operator=(const Truck &other); //operator of appropriation
    //Renting
    double get_rent_price();
    void to_rent(Customer &cust);
};
#endif //CPP_LAB_7_8_TRUCK_H
