#include<iostream>

using namespace std;


// tsrs = take something return something


    int sum(int num){
        int s = 0;
        for(int i=0; i<=num; i++){

            s += i; // s =s + i
        }

        return s;
    }



int main(){


int num = 10;

   cout << "sum of: " << sum(num);


    return 0;
}