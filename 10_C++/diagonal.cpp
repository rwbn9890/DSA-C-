#include<iostream>

using namespace std;

int main(){

// int r;
// cout << "r: ";
// cin >> r;
    

     int array[4][4] = {
         {11, 12, 13, 14},
         {15, 16, 17, 18},
         {19, 20, 21, 22},
         {23, 24, 25, 26},
          };

int sum = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i + j == 3){
                   cout << array[i][j] << " ";
            }
            else{
                   cout << " " << " ";
            }

            // if(r == i){
            //     cout << array[i][j] << " ";
            // }
        }
        cout << endl;
    }


    return 0;
}