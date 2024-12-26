#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;


int main(){


// hex-decimal = 0,1,2,3,4,5,6,7,8,9, a, b, ce

// octa = 0,1,2,3,4,5,6,7

// decimal = 

int a = 10; // 4bytes;
int b = a;   // 4bytes;


int *add = &a;

int **ad = &add;


cout << *ad;

// cout << *add;

// printf("%d \n", &a);
// printf("%d \n", &b);

    return 0;
}