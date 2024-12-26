#include<iostream>
#include<string.h>
using namespace std;


int main(){


// int *a = new int(7);

// int *arr;

// arr  = new int[10];

// delete a;


// a = NULL;


// cout << *a << endl;


int *arr;

    arr = new int[5];


if(arr == NULL){
    cout << "memory allocation is failed" << endl;
}
else {
    cout << "memory allocation is ssuccessfull" << endl;
}









    delete[] arr;

    arr = NULL;



if(arr == NULL){
    cout << "memory dellocation is successfull" << endl;
}
else {
    cout << "memory dellocation is failed" << endl;
}







// int *b;

// b = new int[4];


// b[0] = 10;
// b[1] = 20;










    return 0;
}