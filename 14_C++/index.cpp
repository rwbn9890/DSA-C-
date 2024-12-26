#include<iostream>

using namespace std;

int main(){
    // int *ptr;
    // int num = 10;
    // ptr = &num;

    // cout << ptr << " " << *ptr;

    int num = 100;

    int &ref = num;  // deep copy;
    int num2 = num; // shalow copy;

    ref = 500;

    num2 = 300;


    cout << "ref " << ref << "num " << num << endl;
    cout << "num2 " << num2 << "num " << num << endl;


    return 0;
}