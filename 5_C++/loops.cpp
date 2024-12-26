#include<iostream>


using namespace std;

int main(){
    int i = 5;
    int sum =0;
                            //1 2 3 4 5 6 7 8 9 10
    while(i <= 10){
       i++;     
        sum = sum + i;

           //   i = i+ 1; // i +=i  
    }


    cout << sum;



    return 0;
}