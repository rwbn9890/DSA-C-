#include<iostream>

using namespace std;

// udf = user define function

 
// TNRN == Take Nothing Return Nothing

 void odd(){

        for(int i=0; i<20; i++){
            if(i%2==1){
                cout << i << endl;
            }
        }
        // cout << "Calling to the aara function";
     }


 void even(){

        for(int i=0; i<20; i++){
            if(i%2==0){
                cout << i << endl;
            }
        }
        // cout << "Calling to the aara function";
     }


int main(){

    cout << "calling to the first function" << endl;

    odd();

    even();

     return 0;
}