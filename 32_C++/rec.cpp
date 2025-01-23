#include<iostream>
#include<vector>
using namespace std;



// 4, 2, 1, 3


int merge_sort(vector<int> arr, int low, int high){
 
    if(low >= high){
        return 0;
    }

    int mid = (low + high)/2; // 1

    first_sort(arr, low, mid);  // 2, 4
    second_sort(arr, mid+1, high); // 1, 3

}









int first_sort(vector<int> arr, int low, int high){  // 2, 4

    if(low >= high){
        return 0;
    }

    int mid = (low + high)/2; 

    first_sort1(arr, low, mid);  // 2
    second_sort1(arr, mid+1, high); // 4

}











int first_sort1(vector<int> arr, int low, int high){  

    if(low >= high){
        return 0;
    }

    int mid = (low + high)/2; 

    first_sort1(arr, low, mid);  // 2
    second_sort1(arr, mid+1, high); // 4

}









// 1, 3

int second_sort(vector<int> arr, int low, int high){ 

    if(low >= high){
        return 0;
    }

    int mid = (low + high)/2; 

    first_sort1(arr, low, mid);  // 1
    second_sort1(arr, mid+1, high); // 3

}











int second_sort1(vector<int> arr, int low, int high){  // 4

    if(low >= high){
        return 0;
    }

    int mid = (low + high)/2; 

    first_sort1(arr, low, mid);  // 2
    second_sort1(arr, mid+1, high); // 4

}






int main(){

vector<int> arr = {2, 4, 1, 3};
int n = arr.size();

merge_sort(arr, 0, n-1);






    return 0;
}