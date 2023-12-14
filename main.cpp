#include <iostream>
#include <fstream>
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Customer.h"
#include "MaintenanceRecord.h"

int main()
{
    int k;
    std::string service;

    std::cout << "Welcome to the transport rental and service system! What do you need?" << std::endl;
    Customer cust = Customer();
    std::cout << "Insert customer:" << std::endl;
    std::cout << "\"1\" - from console" << std::endl;
    std::cout << "\"2\" - from file" << std::endl;
    std::cout << "else - our default customer" << std::endl;
    std::cin >> k;
    switch(k)
    {
        case 1:
            std::cin >> cust;
            break;
        case 2:
        {
            std::ifstream in("..\\customer.txt");
            in >> cust;
            in.close();
            break;
        }
        default:
            cust = Customer("Mr P", "No vehicle", 0);
    }
    std::cout << "Nice! Our customer is:" << std::endl;
    std::cout << cust << std::endl;

    std::cout << "Let's add some vehicles!" << std::endl;
    Car car = Car();
    Truck truck = Truck();
    Motorcycle moto = Motorcycle();

    std::cout << "Insert car:" << std::endl; //Toyota Supra 1997 287 100000 true NotRented
    std::cin >> car;
    std::cout << car << std::endl;

    std::cout << "Insert truck:" << std::endl; //GAZ 3322 2003 95 165500 false NotRented
    std::cin >> truck;
    std::cout << truck << std::endl;

    std::cout << "Insert motorcycle:" << std::endl; //Suzuki Bandit 1980 100 29000 true Rented
    std::cin >> moto;
    std::cout << moto << std::endl;

    std::cout << "We will try to rent all these vehicles for " << cust.get_name() << "." << std::endl;
    car.to_rent(cust);
    truck.to_rent(cust);
    moto.to_rent(cust);

    std::cout << "What service does " << cust.get_name() << " need? Insert it (in one word)."<< std::endl;
    std::cin >> service;
    MaintenanceRecord rec = MaintenanceRecord(service, 500);
    std::cout << "How many times should we provide the service?" << std::endl;
    std::cin >> k;
    if (k == 1)
        rec.provide_service(cust);
    else
        rec.provide_service(cust, k);

    std::cout << "We are ready to give bill to the customer " << cust.get_name() << '.' << std::endl;
    std::cout << "Where should we print the check?" << std::endl;
    std::cout << "\"1\" - to console" << std::endl;
    std::cout << "\"2\" - to file" << std::endl;
    std::cout << "else - both ways" << std::endl;
    std::cin >> k;
    switch(k)
    {
        case 1:
        {
            std::cout << cust;
            break;
        }
        case 2:
        {
            std::ofstream out("..\\bill.txt");
            out << cust << std::endl;
            out.close();
            break;
        }
        default:
        {
            std::cout << cust;
            std::ofstream out("..\\bill.txt");
            out << cust << std::endl;
            out.close();
        }
    }
    std::cout << "We will also print a list of our vehicles in the file \"vehicle.txt\"." << std::endl;
    std::ofstream out("..\\vehicles.txt");
    out << car << std::endl << truck << std::endl << moto << std::endl;
    out.close();
    std::cout << "Thank you for this work! Bye-bye!" << std::endl;
    return 0;
}
