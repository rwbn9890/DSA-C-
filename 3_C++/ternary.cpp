#include<iostream>

using namespace std;

int main(){

int a = 1 ;
int b = 2;

// if(a){
//     cout << "true";
// }
// else {
//     cout << "false";
// }

(a>b) ?
 cout << "a is greater" 
 : (b >a) ?
  cout << "b is greater"
   :
    cout << "both are equal";

    return 0;
}