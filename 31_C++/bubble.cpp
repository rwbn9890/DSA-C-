#include<iostream>

using namespace std;



void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



void bubble_sort(int arr[], int n){

int j=0;
    while(j < n){

        for(int i=0; i<n-1; i++){
                
                if(arr[i] < arr[i+1]){     
                int num = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = num;

                }
            }

j++;
    }

    
  

print(arr, n);


}



int main(){

    int arr[5] = {2, 1, 4, 6, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

print(arr, n);

bubble_sort(arr, n);



    return 0;
}