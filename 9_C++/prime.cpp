#include<iostream>

using namespace std;

int main(){

    int num;
    cout <<"num: ";
    cin >> num;

    int count = 0;

     for(int i=2; i<num; i++){
        if(num % i == 0){
            count++;
        }
     }

  if(count > 0){
    cout << "is not prime number";
  }
  else{
    cout << "is prime number";
  }

    return 0;
}