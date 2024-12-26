#include<iostream>

using namespace std;

int main(){

    // for(int i=1; i <= 5; i++){  // i =1, 2, 3
    //    for(int j=1; j<=i; j++){  // j=1
    //                               // 1
    //     cout << j << " ";         // 1 2
    //    }                          //  


   for(int i=5; i>=1; i--){  
    for(int j=5; j>=i; j--){                            
        cout << j << " ";         
       }                          
       cout << endl;   
    }
   
    for(int i=5; i>=1; i--){  
    for(int j=i; j>=1; j--){                            
        cout << j << " ";         
       }                          
       cout << endl;   
    }
    return 0;
}