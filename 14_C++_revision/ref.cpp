#include<iostream>

using namespace std;

int main(){

    int num = 10;
    int &ref = num; 
  
ref = 30;


    cout << "num " << num << " ref " << ref << endl;


  int num2 = num;

  num2 = 20;


    cout << "num " << num << " num2 " << num2 << endl;


    return 0;
}