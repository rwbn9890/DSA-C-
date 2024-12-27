#include<iostream>
using namespace std;

template< typename T1, typename T2>


 T1 sum(T1 x, T2 y){

    cout << "x: " << x << "; y: " << y << endl;

 }

int main(){


  cout << sum<int>(5, 8)  << endl;
  cout << sum<int, char>(5, 'c')  << endl;



    return 0;
}