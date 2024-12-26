#include<iostream>
#include<string>

using namespace std;

int avg(int, int);

int sum(int num1, int num2){
    int sum = 0;
    int count =1;
        for(int i=num1; i<num2; i++){
            sum +=i;
            count++;
        }
        return avg(sum , count);
}
     
int avg(int sum , int count){
    int avg = sum / count;
    return avg;
}

int main(){

    int num1, num2;
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;

    cout << "sum : " << sum(num1, num2);

    return 0;
}