#ifndef _AUTO_HPP_
#define _AUTO_HPP_
#include "Vehicle.hpp"
#include <string>

class Auto:public Vehicle{
    private:
        int wheels;
        string body;
    public:
        Auto();
        ~Auto();
        int getWheels();
        void setWheels(int wheels);
        string getBody();
        void setBody(string body);
        void drivingLicence();       
};
#endif
