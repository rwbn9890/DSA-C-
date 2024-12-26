#include<iostream>
#include<string.h>
using namespace std;


int memo(int n){
    n++;
    return memo2(n+1);
}


int memo2(int n){
 n++;
    return memo3(n+1);
}

int memo3(int n){
 n++;
    return memo4(n+1);
}

int memo4(int n){
 n++;
cout << n << endl;

    return n;
}


int main(){


memo(1);


    return 0;
}