#include<iostream>
#include<vector>
using namespace std;



void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> arr2;
    int left = low;
    int right = mid+1;


    while(left <= mid && right <= high )
    {
            if(arr[left] <= arr[right])
            {
                arr2.push_back(arr[left]);
                left++;
            }
            else 
            {
                arr2.push_back(arr[right]);
                right++;
            }
    }

    while(left<=mid)
    {
        arr2.push_back(arr[left]);
        left++;
    }


    while(right<=high)
    {
        arr2.push_back(arr[right]);
        right++;
    }


for(int i=low; i<=high; i++){

    arr[i]  = arr2[i-low];
}


}




int merge_sort(vector<int> &arr, int low, int high)
{ // 7

    if(low >= high){
        return 0;
    }

    int mid = (low + high)/2; // 3

    merge_sort(arr, low, mid);  //  38 27 43 3
    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);


}






int main(){

vector<int> arr = {2, 4, 1, 6, 5, 3, 7}; // [ 2, 4, 1, 6]


int n = arr.size();

merge_sort(arr, 0, n-1);




for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
}






    return 0;
}