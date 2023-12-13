//
// Created by Egor on 10.12.2023.
//

#ifndef Vehicle_h
#define Vehicle_h
#include <iostream>
#include <cstring>
#include "Customer.h"


class Vehicle {
protected:
    std::string brand;
    std::string model;
    unsigned int year;
    unsigned int power;
    unsigned int mileage;
    std::string registration;
    std::string status; //status
    static unsigned int rent_price;

public:

    //Constructors, destructor
    Vehicle(); //default constructor

    Vehicle& operator=(const Vehicle &other); //operator of appropriation

    //Getters
    inline std::string get_brand() const {
        return brand;
    }

    inline std::string get_model() const {
        return model;
    }

    inline unsigned int get_year() const {
        return year;
    }

    inline unsigned int get_power() const {
        return power;
    }

    inline unsigned int get_mileage() const {
        return mileage;
    }

    inline std::string get_registration() const {
        return registration;
    }

    inline std::string get_status() const {
        return status;
    }


    //Setters
    inline void set_brand(std::string brand)
    {
        this->brand = brand;
    }

    inline void set_model(std::string model)
    {
        this->model = model;
    }

    inline void set_year(unsigned int year) {
        this->year = year;
    }

    inline void set_power(unsigned int power) {
        this->power = power;
    }

    inline void set_mileage(unsigned int mileage) {
        this->mileage = mileage;
    }

    inline void set_registration(std::string registration) {
        this->registration = registration;
    }

    inline void set_status(std::string status)
    {
        this->status = status;
    }

    void set_all(std::string brand, std::string model, unsigned int year, unsigned int power, unsigned int mileage, std::string registration, std::string status)
    {
        this->set_brand(brand);
        this->set_model(model);
        this->set_year(year);
        this->set_power(power);
        this->set_mileage(mileage);
        this->set_registration(registration);
        this->set_status(status);
    }

    //Rent
    virtual double get_rent_price() const {};
    virtual void to_rent(const Customer &cust) {};
};

//Input, output
std::istream& operator>>(std::istream &in, Vehicle &v);
std::ostream & operator<<(std::ostream &o, const Vehicle &v);

#endif //Vehicle_h
