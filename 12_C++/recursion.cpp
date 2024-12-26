#include<iostream>

using namespace std;


int rec(int num){

    if(num <=1){
        return 1;
    }
    return num*rec(num-1); // 4*3 = 12*2 24
}

int three();

int two();

int four(int num){
 
    return num*three(num-1); // 4*3*2 
}

int three(int num){ 
     
    return num*two(); // 3*2 
}

int two(int num){
    num = num -1;
    return num;
}

// int one(){
//     return 1;
// }

int main(){

    int num = 4;

//   cout <<  rec(num);

cout << four(num);  // 24

    return 0;
}