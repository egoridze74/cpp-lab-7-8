//
// Created by Egor on 12.12.2023.
//

#include "Motorcycle.h"
#include "Customer.h"
double Motorcycle::get_rent_price()
{
    double price = this->rent_price;
    if (this->get_power() > 100)
        return price * 1.67;
    else if (this->get_power() < 100)
        return price * 0.85;
    else
        return price * 1.23;

}

void Motorcycle::to_rent(Customer &cust)
{
    if (this->get_registration())
    {
        cust.set_bill(cust.get_bill() + this->get_rent_price());
        std::string moto = this->get_brand() + " " + this->get_model();
        cust.set_vehicle(moto);
        this->set_status("Rented");
        std::cout << cust.get_name() << " rented Motorcycle \"" << moto <<
                  "\" for " << this->get_rent_price() << "." << std::endl;
    }
    else
        std::cout << "Motorcycle can't be rented because it it doesn't have registration." << std::endl;
}