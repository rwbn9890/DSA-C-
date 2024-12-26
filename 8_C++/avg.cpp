#include<iostream>

using namespace std;

int main(){

    int size;
    cout << "enter size: ";
    cin >> size;

    int box[size];

    for(int j=0; j<size; j++){
        cout << "box[" << j << "]: ";
        cin >> box[j];
    }

    int sum =0;

    for(int i=0; i<size; i++){
        sum = sum + box[i];
        
    }
    cout << "sum: "<< sum << endl;

    int avg = sum / 6;
    
    cout << "average: " << avg;

    return 0;
}