#include<iostream>

using namespace std;

// Take Something Return Nothing

void oddeven(int n){
   
        if(n%2==0){
            cout << "num is Even";
        }
        else {
            cout << "num is Odd";
        }
}


void isPrime( int number){

                int count = 0;
        for(int i=2; i<number; i++){
            if(number%i==0){
                count++;
            }
        }
        if(count == 0){
            cout << "num is PRIME number";
        }
        else {
            cout << "num is NOT PRIME number";
        }

}


int main(){

         int num;
        cout << "num: ";
        cin >> num;

        oddeven(num);

    cout << endl;
    
        isPrime(num);


     return 0;
}