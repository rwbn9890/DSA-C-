#include<iostream>
#include<string.h>
using namespace std;

    class Engine
    {
        public:

        char engine_details[50] = "v8";
    };


    class Wheel
    {
        public:

        char wheel_details[50] = "alloy wheels";
    };


    class Car : public Engine, public Wheel
    {
        public:
        void build(){
            cout << "car is builded using " << this->engine_details << " and 12 inch " << this->wheel_details << endl; 
        }
    };




int main(){
    
Car c1;

c1.build();

    return 0;
}