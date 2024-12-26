#include<iostream>

using namespace std;


int avg(int, int);


int sum(int num){

    int sum =0;
    for(int i=0; i<=num; i++){
        sum = sum + i;
    }

   return avg(sum, num);  //20
}


int avg(int sum , int num){

    int avg = sum/num;
    return avg;
}



int main(){

    int num;
    cout << "num: ";
    cin >> num;

   cout << "average is: " <<  sum(num); 

    return 0;
}