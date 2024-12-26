#include<iostream>

#include<string.h>


using namespace std;

class Car
{
    public:
    char name[100];
    int price;
    char color[100];
    int milege;
};

int main(){


    Car vehicle[4];
    Car vehicle2;

    strcpy(vehicle.name, "Mahindra");
    vehicle.price = 20000;
    strcpy(vehicle.color, "red");
    vehicle.milege = 15;

    strcpy(vehicle2.name, "Tata");
    vehicle2.price = 25000;
    strcpy(vehicle2.color, "brown");
    vehicle2.milege = 19;


    cout << "name: " <<  vehicle.name << endl;
     cout << "price: " <<  vehicle.price << endl;
      cout << "color: " <<  vehicle.color << endl;
       cout << "milage: " <<  vehicle.milege << endl;


    cout << "name: " <<  vehicle2.name << endl;
     cout << "price: " <<  vehicle2.price << endl;
      cout << "color: " <<  vehicle2.color << endl;
       cout << "milage: " <<  vehicle2.milege << endl;


    return 0;
}