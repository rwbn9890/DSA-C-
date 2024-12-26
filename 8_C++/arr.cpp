#include<iostream>

using namespace std;

int main(){

    int a = 10;

    a = 15;
    // cout << a;

    int arr[5]; 

    for(int j=0; j<5; j++){
        cout << "arr[" << j << "]: " ;
        cin >> arr[j];
    }

    arr[2] = 101;

//   cin >> arr[0];
//   cin >> arr[1];
//   cin >> arr[2];
//   cin >> arr[3];
//   cin >> arr[4];

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;


    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }




    return 0;
}