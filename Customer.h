//
// Created by Egor on 12.12.2023.
//

#ifndef CPP_LAB_7_8_CUSTOMER_H
#define CPP_LAB_7_8_CUSTOMER_H
#include <iostream>

class Customer
{
private:
    std::string name;
    std::string vehicle;
    double bill;
public:

    //Constructors, destructor
    Customer(); //default constructor

    Customer(std::string name, std::string vehicle, double bill);

    Customer(const Customer &); //copy constuctor

    ~Customer() {}; //destructor

    Customer& operator=(const Customer &other); //operator of appropriation

    //Getters
    inline std::string get_name() const {
        return name;
    }

    inline std::string get_vehicle() const {
        return vehicle;
    }

    inline double get_bill() const {
        return bill;
    }

    //Setters
    inline void set_name(std::string name) {
        this->name = name;
    }

    inline void set_vehicle(std::string vehicle) {
        this->vehicle = vehicle;
    }

    inline void set_bill(double bill) {
        this->bill = bill;
    }
};


//Input, output
std::istream& operator>>(std::istream &in, Customer &c);
std::ostream & operator<<(std::ostream &o, const Customer &c);

#endif //CPP_LAB_7_8_CUSTOMER_H
