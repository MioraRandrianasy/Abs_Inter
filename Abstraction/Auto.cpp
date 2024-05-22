#include <iostream>
#include <string>
#include "Auto.hpp"
using namespace std;
Auto::Auto()
{
}
Auto::~Auto()
{
}
int Auto::getWheels()
{
    return wheels;
}
void Auto::setWheels(int wheels)
{
    this->wheels=wheels;
}
string Auto::getBody()
{
    return body;
}
void Auto::setBody(string body)
{
    this->body=body;
}
void Auto::drivingLicence()
{
    cout << "B licence is required"<< endl;
}
