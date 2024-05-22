#include<iostream>
#include"Vehicle.hpp"
#include"Auto.hpp"
#include"Moto.hpp"

using namespace std;

int main()
{
    //Moto scooter=Moto();
    //Auto bmw=Auto();
    Moto scooter;
    Auto bmw;

    cout<<"Drive a motorcycle"<<endl;
    scooter.drivingLicence();
    scooter.setWheels(2);
    cout<<"Wheels: "<< scooter.getWheels() <<endl;
    scooter.setSpeed("30km/h");
    cout<< "Speed: "<<scooter.getSpeed()<<endl;

    cout<<"Drive a car"<<endl;
    bmw.drivingLicence();
    bmw.setWheels(4);
    cout<<"Wheels: "<<bmw.getWheels()<< endl;
    bmw.setBody("With bodywork");
    cout<< "Body: "<<bmw.getBody()<<endl;

    return 0;
}
