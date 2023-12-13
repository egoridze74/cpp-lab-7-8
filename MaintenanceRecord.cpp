//
// Created by Egor on 13.12.2023.
//

#include "MaintenanceRecord.h"
#include <iostream>

//Constructors, destructor
MaintenanceRecord::MaintenanceRecord(std::string service, unsigned int price)
{
    this->service = service;
    this->price = price;
}

MaintenanceRecord::MaintenanceRecord(const MaintenanceRecord &other) // copy constructor
{
    this->service = other.service;
    this->price = other.price;
}

MaintenanceRecord& MaintenanceRecord::operator=(const MaintenanceRecord &other) //operator of appropriation
{
    this->service = other.get_service();
    this->price = other.get_price();
    return *this;
}

MaintenanceRecord& MaintenanceRecord::operator+(const MaintenanceRecord &other)
{
    this->service += "\n" + other.get_service();
    this->price += other.get_price();
}


//Application
void MaintenanceRecord::provide_service(Customer &cust)
{
    cust.set_bill(cust.get_bill() + this->get_price());
    std::cout << "Customer " << cust.get_name() << " has been provided service: " << this->get_service() << "."
    << std::endl << std::endl;

}

void MaintenanceRecord::provide_service(Customer &cust, unsigned int n)
{
    cust.set_bill(cust.get_bill() + this->get_price() * n);
    std::cout << "Customer " << cust.get_name() << " has been provided service: \"" << this->get_service() << "\" "
    << n << " times." << std::endl << std::endl;
}