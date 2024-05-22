#ifndef _Vehicle_HPP_
#define _Vehicle_HPP_

#include<string>
using namespace std;
class Vehicle
{
    private:
        string brand;
    public:
        Vehicle();
        ~Vehicle();
        string getBrand();
        void setBrand(string brand);
        virtual void drivingLicence()=0;
};
#endif

