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



int linear_search(int arr[], int n, int t)
{

    for(int i=0; i<n; i++)
    {
        if(arr[i] == t)
        {
            return i;

        }
    }
    return -1;
}



int main(){

    int array[7] = {2, 45, 32, 7 , 11, 56, 26};
    int n = 7;
    int t; 
    cout << "target:  ";
    cin >> t;


print_array(array ,  n);

   int l_index =  linear_search(array, n, t);


   if(l_index == -1)
   {
    cout << "ele not found...!" << endl;
   }
   else{
    cout << "ele found at " << l_index << endl;
   }




    return 0;
}