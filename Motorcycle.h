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

    //Constructors


    //Renting
    double get_rent_price();
    void to_rent(Customer &cust);
};


#endif //CPP_LAB_7_8_MOTORCYCLE_H
