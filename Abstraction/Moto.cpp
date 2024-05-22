#include<iostream>
#include <string>
#include"Moto.hpp"
using namespace std;

Moto::Moto()
{}
Moto::~Moto()
{}
string Moto::getSpeed()
{
    return this->speed;
}
void Moto::setSpeed(string speed)
{
    this->speed=speed;
}
int Moto::getWheels()
{
    return this->wheels;
}
void Moto::setWheels(int wheels)
{
    this->wheels=wheels;
}
void Moto::drivingLicence()
{
    cout<< "A licence required"<< endl;
}