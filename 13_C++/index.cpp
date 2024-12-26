#include<iostream>

using namespace std;

int main(){

// hex-decimal = 
// decimal = 0123456789
// octan = 01234567
// banary = 010101001

    // int *ptr;
    // int num = 4;

    // ptr = &num;

    // cout << ptr << " = " << *ptr << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    int *parr[5];


    for(int i=0; i<5; i++){
        parr[i] = &arr[i];
    }

    for(int i=0; i<5; i++){
        cout << "address: " << parr[i] << " value: " << *parr[i] << endl;
    }


    // cout << arr << endl;

    // int* pa;
    // pa = arr;
    // cout << arr;
    // printf("%d\n", arr2);

    // printf("%d \n", &arr[1]);
    // printf("%d \n", &arr[2]);
    // printf("%d \n", arr);
//  cout << arr[1] << endl;


    // cout << &num;

    // printf("%d \n", &num);
    // printf("%u \n", &num);





    return 0;
}