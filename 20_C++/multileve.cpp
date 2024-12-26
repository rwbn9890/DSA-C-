#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
    public:

        void eat(){
            cout << "Eating ...." << endl;
        }
      
};


class Cat : public Animal
{
        public:
        void meow(){
            cout << "meowing ..." << endl;
        }
};

class Persian : public Cat
{
        public:

        void soft(){
            cout << "soft hares...." << endl;
        }
}   ;





int main(){
    
    Cat c1;


    Persian p1;

    p1.eat();


    p1.soft();

    c1.eat();
    c1.meow();

    return 0;
}