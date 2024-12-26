#include<iostream>

using namespace std;


// tnrn = take nothing return nothing

void sum(){
    int a = 10;
    int b = 20;

    cout << "sum: " <<  a+b<< endl;

}


void odd(){
    
  int num =10;
      for(int i=1; i<=num; i++){
        if(i%2==1){
            cout << i << endl;
        }   
    }

}


int main(){

    sum();

  
    odd();
  


    return 0;
}