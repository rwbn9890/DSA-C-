#include<iostream>
#include<vector>
using namespace std;



int part(vector<int> &arr, int low, int high)
{
    int last = arr[high];
    int i = low-1;

    for(int j=low; j<high; j++){
        if(arr[j] < last)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);

    return i+1;

}


// arr 5, 1, 2, 3, 4



int quick_sort(vector<int> &arr, int low, int high)
{

    if(low < high)
    {

     int p = part(arr, low, high);

    quick_sort(arr, low, p-1);
    quick_sort(arr, p+1, high);
      
    }



}


int main(){

vector<int> arr = {7, 4, 2, 6, 5, 3, 1}; // [ 2, 4, 1, 6]

int n = arr.size();



quick_sort(arr, 0, n-1);



for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
}

    return 0;
}