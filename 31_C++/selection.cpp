#include<iostream>

using namespace std;



void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void selection_sort(int arr[], int n){

    for(int i=0; i<n-1; i++){
     int min = arr[i];

        int index = i;

        for(int j=i+1; j<n; j++){

            if(min > arr[j]){
                min = arr[j];
                index = j;
            }
        }

    int temp = arr[i];
    arr[i] = min;
    arr[index] = temp;

        }


        print(arr, n);

}


int main(){

    int arr[5] = {4, 3, 6, 2 ,1 };

    int n = sizeof(arr) / sizeof(arr[0]);

// print(arr, n);

selection_sort(arr, n);



    return 0;
}