#include <iostream>
#include "Car.h"
#include "Customer.h"

int main()
{
    Car car = Car("Toyota", "Supra", 1997, 143, 20000, true, "Rented");
    std::cout << car << std::endl;
    return 0;
}
