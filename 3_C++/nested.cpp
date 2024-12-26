#include<iostream>

using namespace std;

int main(){

    int a = 9;
    int b = 6;
    int c = 7;


    if(a > b){
        if(a > c){
            cout << "a is greater";
        }
        else {
            cout << "c is greater";
        }
    }
    else {
        if(b > c){
            cout << "b is greater";
        }
        else{
            cout << "c is greater";
        }
    }

    return 0;
}