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
    static const int rent_price = 2000;

public:

    //Constructors, destructor
    Car(); //default constructor

    Car(std::string brand, std::string model, int year, int power, int mileage, bool registration, std::string status);

    Car(const Car &); //copy constructor

    ~Car() //destructor
    {};

    Car& operator=(const Car &other); //operator of appropriation


    //Renting
    double get_rent_price() override;
    void to_rent(Customer &cust) override;
};


#endif //CPP_LAB_7_8_CAR_H
