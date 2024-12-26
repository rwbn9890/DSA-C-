#include<iostream>

using namespace std;

int main(){
    int r, c;
    cout << "row: ";
    cin >> r;
    cout << "col: ";
    cin >> c;

    int array[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "array["<<i<<"]["<<j<<"]: ";
            cin >> array[i][j];
        }
    }
    
    cout << endl;

    //  int array[3][3] = {
    //     {1, 2, 3},
    //      {4, 5, 6},
    //       {7, 8, 9}};

    //    cout <<   sizeof(array)/ sizeof(array[0][0]);

    for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
            if(array[i][j] % 2 ==0){
                cout <<  array[i][j] << " ";
            }
         }
         cout << endl;
    }

    return 0;
}