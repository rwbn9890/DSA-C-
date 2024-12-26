#include<iostream>

using namespace std;

int main(){

int a,b,c;
cout << "a: ";
cin >> a;
cout << "b: ";
cin >> b;

    if(a > b){
        cout << "a is greater";
    }
    else if(b > a){
        cout << "b is greater";
    }
    else{
        cout << "both are equals";
    }

    return 0;
}