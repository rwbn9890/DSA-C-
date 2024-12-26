#include<iostream>
#include<string.h>
using namespace std;




int* sub(){

    int z = 10;

    return &z;
}

int main(){

int arr[5] = {1, 2, 3, 4, 5};

int *b[5];

// int *ptr = &arr;

cout << arr << endl;;


 for(int i=0; i<5; i++){
    b[i] = &arr[i];
 }

 


 for(int i=0; i<5; i++){
    cout << b[i] << endl;
 }


int* sub();

    return 0;
}