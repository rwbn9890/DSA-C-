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




int main(){
    
    Cat c1;




    return 0;
}