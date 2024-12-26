#include<iostream>
#include<string.h>
using namespace std;

    class Vehicle
    {
        public:

        char wheel_details1[50] = "Aluminium wheels";
        char wheel_details2[50] = "steel bar wheels";
    };



    class Car : public Vehicle
    {
        public:
        void build(){
            cout << "car is builded using 4 " << this-> wheel_details1 << endl;
        }
    };


    class Bike : public Vehicle
    {
        public:
        void build(){
            cout << "Bike is builded using 2 " << this->wheel_details2 << endl;
        }
    };




int main(){
    
Car c1;
Bike b1;

c1.build();
b1.build();


    return 0;
}