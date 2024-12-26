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
   int size;
    cout << "No of Vehicles: ";
 
    cin >> size;

    Car vehicle[size];

    for(int i=0; i<size; i++){
           vehicle[i].name;
            vehicle[i].price;
            vehicle[i].color;
            vehicle[i].milege;
            cout << "Vehicle["<< i <<"].name: ";
            cin >> vehicle[i].name;
            cout << "Vehicle["<< i <<"].price: ";
            cin >> vehicle[i].price;
            cout << "Vehicle["<< i <<"].color: ";
            cin >> vehicle[i].color;
            cout << "Vehicle["<< i <<"].milege: ";
            cin >> vehicle[i].milege;
            cout << endl;
    }

    cout << endl;

cout << " name " << " " << " price " << " " << " color " << " " << "milege " << endl << endl;
    
for(int i=0; i<size; i++){
       cout << " " <<  vehicle[i].name << " " ;
        cout << " " <<  vehicle[i].price << " " ;
         cout << " " <<  vehicle[i].color <<  " " ;
       cout << " " <<  vehicle[i].milege <<" " << endl; 
}



    return 0;
}