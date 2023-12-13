//
// Created by Egor on 12.12.2023.
//

#ifndef CPP_LAB_7_8_CAR_H
#define CPP_LAB_7_8_CAR_H
#include "Vehicle.h"
#include "Customer.h"

class Car : public Vehicle
{
private:
    static const unsigned int rent_price = 2000;

public:

    //Constructors, destructor
    Car(); //default constructor

    Car(std::string brand, std::string model, unsigned int year, unsigned int power, unsigned int mileage, std::string registration, std::string status);

    Car(const Car &); //copy constructor

    ~Car() //destructor
    {};

    Car& operator=(const Car &other); //operator of appropriation


    //Renting
    double get_rent_price() const;
    void to_rent(Customer &cust);
};


#endif //CPP_LAB_7_8_CAR_H
