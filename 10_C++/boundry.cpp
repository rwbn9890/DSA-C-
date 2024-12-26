#include<iostream>

using namespace std;

int main(){


     int array[4][4] = {
         {1, 2, 3, 12},
         {4, 5, 6, 11},
         {7, 8, 9, 10},
         {13,14,15, 16},
          };


int sum = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
         
         if(i==0){
            sum +=array[i][j];
         }
        
         
        }
        cout << endl;
    }

cout << "sum: " << sum;
    return 0;
}