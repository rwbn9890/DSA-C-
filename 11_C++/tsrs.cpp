#include<iostream>

using namespace std;

int findsum(int, int );

// TNRS = Take Nothing Return Something


 int main(){
    


    int num1;
    cout << "num: ";
    cin >> num1;


    int num2;
    cout << "num: ";
    cin >> num2;

    cout << "sum is " <<  findsum(num1, num2)  << " /-";

 
    return 0 ;
 }



int findsum(int n1, int n2){
    int sum =0;
    for(int i=n1; i<n2; i++){
        sum  += i;  // sum = sum + i;
    }  
    return sum;
}

