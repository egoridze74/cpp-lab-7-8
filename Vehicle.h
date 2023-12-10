//
// Created by Egor on 10.12.2023.
//

#ifndef Vehicle_h
#define Vehicle_h
#include <iostream>
#include <cstring>


class Vehicle {
private:
    char *brand;
    char *model;
    int year;
    int power;
    int mileage;
    char *status; //status of registration
public:

    //Constructors, destructor
    Vehicle(); //default constructor

    Vehicle(char *brand, char *model, int year, int power, int mileage, char *status);

    Vehicle(const Vehicle &); //copy constructor

    ~Vehicle(); //destructor

    Vehicle& operator=(const Vehicle &other);

    //Getters
    inline char* get_brand() const {
        return brand;
    }

    inline char* get_model() const {
        return model;
    }

    inline int get_year() const {
        return year;
    }

    inline int get_power() const {
        return power;
    }

    inline int get_mileage() const {
        return mileage;
    }

    inline char* get_status() const {
        return status;
    }


    //Setters
    void set_brand(char* brand)
    {
        delete[] brand;
        this->brand = new char[strlen(brand)];
        strcpy(this->brand, brand);
    }

    void set_model(char* model)
    {
        delete[] model;
        this->model = new char[strlen(model)];
        strcpy(this->model, model);
    }

    void set_year(int year) {
        this->year = year;
    }

    void set_power(int power) {
        this->power = power;
    }

    void set_mileage(int mileage) {
        this->mileage = mileage;
    }

    void set_status(char* status)
    {
        delete[] brand;
        this->brand = new char[strlen(brand)];
        strcpy(this->brand, brand);
    }

    void set_all(char *brand, char *model, int year, int power, int mileage, char *status)
    {
        this->set_brand(brand);
        this->set_model(model);
        this->set_year(year);
        this->set_power(power);
        this->set_mileage(mileage);
        this->set_status(status);
    }
};


#endif //Vehicle_h
