#include<iostream>
#include<string.h>
using namespace std;

    class Vehicle
    {
        public:

        int A ;
        int B;

        void make(int a){
            cout << "car is made..." << endl;
        }

        void make(char a){
            cout << "car is made in "<< a << " days " << endl;
        }

        void make(float a){
            cout << "car is made in "<< a << " days by " << a << " workers" << endl;
        }
        // void make(){
        //     cout << "car is made..." << endl;
        // }

        // void make(int a){
        //     cout << "car is made in "<< a << " days " << endl;
        // }

        // void make(int a, int b){
        //     cout << "car is made in "<< a << " days by " << b << " workers" << endl;
        // }

    };




int main(){
    
    Vehicle car;

    // car.make();
    // car.make(10);
    // car.make(10, 3);

    car.make('a');
 


    return 0;
}