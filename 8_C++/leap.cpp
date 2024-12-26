#include<iostream>

using namespace std;


int main(){

 int leap[100];

    int start_year;
    int end_year;

    cout << "start_year: ";
    cin >> start_year;
    cout << "end_year:";
    cin >> end_year;

    int b = 0;

    for(int i= start_year; i<= end_year; i++){
        if(i%4 == 0){
          leap[b] = i;
          b++;  
        }
    }



cout << endl<< "leap ["<<b<<"] = { ";

    for(int j=0; j<b; j++){
        cout << leap[j] <<  " ";;
    }

    cout << " }" << endl;

    // leap[100]  ={2000, 2004, 2008, 2012, 2016, 2020}
            //        0    1      2     3    4     5
   

    return 0;
}