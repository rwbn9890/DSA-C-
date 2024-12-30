#include<iostream>
#include<vector>

using namespace std;

int main(){



vector<int> v1(4, 2);

vector<vector<int>> v2(5, v1);
for(vector<int> elem : v2){
   for(int el : v1){
    cout << el << " ";
   }
   cout << endl;
}



    return 0;
}