#include<iostream>
#include<string.h>
using namespace std;


class City
{

    public:

    int id;
  

  // default;
    City(){
        cout << "first object" << endl;
    }


    // parameterized;

    City(int n){

        this->id = n;
        cout << "id: " << this->id << endl;
    }

    City( City &obj){
       
        this->id = obj.id;

        cout << "next id:" << this->id << endl;

    }

    ~City(){
        cout << "object is destoryed" << endl;
    }


};



int main(){
    


    {
        
City c1, c2, c3(20);


// deep copy;
City c4(c3);

/// shalow copy;
City c5 = c3;

// shalow copy
int a = 10;
int b = a;

a = 20;

// deep copy
int x = 10;
int &y = x;

x = 10;

  cout << "all are distroyed";
    }

  



    return 0;
}