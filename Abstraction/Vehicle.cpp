#include"Vehicle.hpp"
Vehicle::Vehicle()
{
}
Vehicle::~Vehicle()
{
}

string Vehicle:: getBrand()
{
    return this->brand;
 }
void Vehicle::setBrand(string brand)
{
    this->brand=brand;
}