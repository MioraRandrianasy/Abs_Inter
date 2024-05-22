#ifndef _MOTO_HPP_
#define _MOTO_HPP_
#include"Vehicle.hpp"
#include<string>
using namespace std;
class Moto : public Vehicle
{
    private:
        string speed;
        int wheels;
    public:
        Moto();
        ~Moto();
        string getSpeed();
        void setSpeed(string speed);
        int getWheels();
        void setWheels(int wheels);
        void drivingLicence();       
};
#endif
