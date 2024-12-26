#include<iostream>

using namespace std;


// tnrn = take nothing return something;

int sum(){
  int a = 10;
    int b = 20;
    return a+b;

}


int odd(){
  int num =10;
      for(int i=2; i<=num; i++){
        if(i%2==1){
            return i;
        }   
        else{
            return 0;
        }
    }

};


int main(){
  
 cout << "sum: " <<  sum() << "/-" << endl << endl;
    
    

  
    cout << odd();
  


    return 0;
}