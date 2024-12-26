#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "num: ";
    cin >> num;

    int factorial =1;

    for(int i=num; i>=1; i--){  // 5 4 3 2 1
        factorial *= i;   // factorial = factorial * i;  // 5 * 4 * 3 * 2 * 1
    }

    cout << "factorial: " << factorial;

     return 0   ;


}