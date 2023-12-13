//
// Created by Egor on 13.12.2023.
//

#ifndef CPP_LAB_7_8_MAINTENANCERECORD_H
#define CPP_LAB_7_8_MAINTENANCERECORD_H
#include <iostream>
#include "Customer.h"

class MaintenanceRecord {
private:
    std::string service; //type of service
    unsigned int price; //price of service

public:
    //Constructors, destructor
    MaintenanceRecord(std::string service, unsigned int price);

    MaintenanceRecord(const MaintenanceRecord &); // copy constructor

    ~MaintenanceRecord() {}; //destructor

    MaintenanceRecord& operator=(const MaintenanceRecord &other); //operator of appropriation

    MaintenanceRecord& operator+(const MaintenanceRecord &other);

    //Getters
    inline std::string get_service() const {
        return service;
    }

    inline unsigned int get_price() const {
        return price;
    }

    //Setters
    inline void set_service(std::string service) {
        this->service = service;
    }

    inline void set_price(unsigned int price) {
        this->price = price;
    }


    //Application
    void provide_service(Customer &cust);

    void provide_service(Customer &cust, unsigned int n);
};


#endif //CPP_LAB_7_8_MAINTENANCERECORD_H
