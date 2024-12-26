#include<iostream>
#include<string.h>
using namespace std;


class Course
{
    public:
    char name[100];
   int duration;
    char lang[100];


public:
    void setData(int i){

        cout << "c["<<i<<"].name: ";
        cin >> this->name;
       cout << "c["<<i<<"].duration: ";
       cin >> this->duration;
        cout << "c["<<i<<"].lang: ";
        cin >> this->lang;
    }

    void getData(){
        
        cout << name << " " << duration << " " << lang << endl;
    }


    Course *getaddress(){
        return this;
    }




};




int main(){



int size; 
cout << "size: ";
cin >> size;

Course c[size]; // c[0], c[1] // c[size] = {object, object, objec}

for(int i=0; i<size; i++){
    c[i].setData(i);
}

for(int i=0; i<size; i++){
    c[i].getData();
}



 


    return 0;
}