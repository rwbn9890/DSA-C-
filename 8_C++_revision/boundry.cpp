#include<iostream>

using namespace std;

int main(){

  

    int arr[5][5] = {
                        {11, 12, 13, 14, 15}, 
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25},
                        {26, 27, 28, 29, 30},
                        {31, 32, 33, 34, 35}
                         };

  cout << endl;


   for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i==0 || i==4 || j==0 || j==4){
            cout << arr[i][j] << " ";  
        }
        else{
            cout << " " << "  ";
        }
     
    } 
    cout << endl;
    
   }


  cout << endl;



   for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i==j){
            cout << arr[i][j] << " ";  
        }
        else{
            cout << " " << "  ";
        }
     
    } 
    cout << endl;
    
   }


   
  cout << endl;



   for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(i+j == 4){
            cout << arr[i][j] << " ";  
        }
        else{
            cout << " " << "  ";
        }
     
    } 
    cout << endl;
    
   }


    return 0;
}