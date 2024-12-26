#include<iostream>
#include<string.h>
using namespace std;

// abstract class
// interface
    class Main
    {
        public:
           virtual void signup() = 0;  // virtual method;
           virtual void login() = 0;  // virtual method;

    
           void calling(){
            cout << "we are getting call...." << endl;
           }

    };

    class Sub: public Main
    {
        public:
            void signup(){
                cout << "your are singnup..." <<endl;
            }
            void login(){
                cout << "your are login..." <<endl;
            }

    };




int main(){

Sub obj;

obj.signup();
obj.calling();

    return 0;
}