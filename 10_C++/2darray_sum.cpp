#include<iostream>

using namespace std;

int main(){


     int array[4][4] = {
        {1, 2, 3, 12},
         {4, 5, 6, 11},
          {7, 8, 9, 10},
          {13,14,15, 16},

          };


    int no_ele = sizeof(array) / sizeof(array[0][0]);

int sum = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum = sum + array[i][j];
        }
    }

    int avg = sum / no_ele;

    cout << avg;

    return 0;
}