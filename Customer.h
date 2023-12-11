//
// Created by Egor on 12.12.2023.
//

#ifndef CPP_LAB_7_8_CUSTOMER_H
#define CPP_LAB_7_8_CUSTOMER_H
#include <iostream>
#include "Vehicle.h"

class Customer
{
private:
    std::string name;
    Vehicle vehicle;
    double bill;
public:

    //Constructors, destructor
    Customer(); //default constructor

    Customer(std::string name, Vehicle vehicle, double bill);

    Customer(const Customer &); //copy constuctor

    ~Customer() //destructor
    {};

    Customer& operator=(const Customer &other); //operator of appropriation

    //Getters
    inline std::string get_name() {
        return name;
    }

    inline Vehicle get_vehicle() {
        return vehicle;
    }

    inline double get_bill() {
        return bill;
    }

    //Setters
    inline void set_name(std::string name) {
        this->name = name;
    }

    inline void set_vehicle(Vehicle &vehicle) {
        this->vehicle = vehicle;
    }

    inline void set_bill(double bill) {
        this->bill = bill;
    }
};


#endif //CPP_LAB_7_8_CUSTOMER_H
