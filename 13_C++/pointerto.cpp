#include<iostream>

using namespace std;

int main(){

// hex-decimal = 
// decimal = 0123456789
// octan = 01234567
// banary = 010101001

int num = 5;

int *p1, **p2, ***p3; 
p1 = &num;

*p2 = p1;

**p3 = *p2;

// cout << p1 << endl;
// cout << **p2 << endl;
cout << **p3 << endl;




    return 0;
}