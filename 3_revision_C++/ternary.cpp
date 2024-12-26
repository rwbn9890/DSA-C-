#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // if(num){
    //     cout << "true";
    // }
    // else {
    //     cout << "false";
    // }

    (a>b) ?

        (a> c) ? cout << "a is greater" : (a == c) ? cout << "both equal" :  cout << "c is greater"
     :
       (b> c) ? cout << "b is greater" : cout << "c is greater";

    return 0;
}