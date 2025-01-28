#include<iostream>
using namespace std;

void print_array(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int binary_search(int arr[], int low, int high, int target)
{


    if(low > high)
    {
        return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid] > target)
    {
       return binary_search(arr, low, mid, target);
    }
    else{
       return binary_search(arr, mid+1, high, target);
    }



    return -1;

 
    
}



int main(){

    int array[7] = {11, 25, 29, 32, 39, 44, 47}; // 
    int n = 7;
    int t; 
    cout << "target:  ";
    cin >> t;


   int l_index =  binary_search(array, 0, n-1, t);


   if(l_index == -1)
   {
    cout << "ele not found...!" << endl;
   }
   else{
    cout << "ele found at " << l_index << endl;
   }




    return 0;
}