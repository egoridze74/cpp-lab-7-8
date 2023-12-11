//
// Created by Egor on 12.12.2023.
//

#include "Car.h"
#include "Customer.h"
double Car::get_rent_price()
{
    double price = this->rent_price;
    if (this->get_power() > 100)
        return price * 1.3;
    else if (this->get_power() < 100)
        return price * 0.9;
    else
        return price * 1.1;

}

void Car::to_rent(Customer &cust)
{
    if (this->get_registration())
    {
        cust.set_bill(cust.get_bill() + this->get_rent_price());
        cust.set_vehicle(*this);
        this->set_status("Rented");
        std::cout << cust.get_name() << " rented Car \"" << this->get_brand() << " " << this->get_model() <<
        "\" for " << this->get_rent_price() << "." << std::endl;
    }
    else
        std::cout << "Car can't be rented because it it doesn't have registration." << std::endl;
}