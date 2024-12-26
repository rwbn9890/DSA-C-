#include<iostream>

using namespace std;


// int value(int a, int b){
//    cout << "passing by value " << a + b;
// }


// int variable(int a, int b){
//    cout << "passing by variable " << a + b;
// }


// int pointer(int *a, int *b){
//    cout << "passing by pointer " << *a + *b;
// }


// int address(int *a, int *b){
//     cout << "passing by address "  << *a + *b;
// }


// int array(int arr[]) {
//     cout << arr[3] << endl;
// }

int reference(int &n){
    n= 10;
    cout << n*n;
}



int const_reference(const int &n){
    cout << n*n;
}

int main(){

//     value(5, 6);  // passing value;

int a = 5; 
int b = 6;

 //     variable(a, b); // passing variable;

 int *ptr1 = &a;
 int *ptr2 = &b;

    //  pointer(ptr1, ptr2);

    // address(&a, &b);

    int arr[5] = {1, 2, 3, 4, 5};

    // array(arr);

    // reference(a)
   const_reference(a)

    return 0;
}