#include<iostream>

using namespace std;


// tnrn = take something return nothing

void sum(int x , int y){
 
    cout << "sum: " <<  x+y << endl;

}


void odd(int num){

      for(int i=1; i<=num; i++){
        if(i%2==1){
            cout << i << endl;
        }   
    }

}


int main(){
   int a = 10;
    int b = 20;

    sum(a, b);
    
  int num =10;
  
    odd(num);
  


    return 0;
}