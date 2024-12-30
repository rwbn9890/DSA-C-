#include<iostream>
#include<vector>

using namespace std;

int main(){

 vector<int> arr = {5, 2, 4, 4, 7, 1, 4, 0, 3};
 vector<int>arr2;

int n=arr.size();

 for(int i=1; i<n-1; i++){

    if(arr[i] < arr[i+1] && arr[i] < arr[i-1]){
        arr2.push_back(arr[i]);
    }
 }

 for(int el : arr2){
    cout << el << " ";
 }
 return 0;
}