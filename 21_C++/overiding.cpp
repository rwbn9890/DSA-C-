#include<iostream>
#include<string.h>
using namespace std;

    class India
    {
        public:

            void wearing(){
                cout << "dhoti Kurta...."  << endl;
            }


    };

    class Hyderabaad : public India
    {
        public:
            void wearing(){
                cout << "Pathani Kurta..." << endl;

                India::wearing();
            }
    };





int main(){

    Hyderabaad obj;

    obj.wearing();
    
 
 

    return 0;
}