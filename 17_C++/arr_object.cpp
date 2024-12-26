#include<iostream>
#include<string.h>
using namespace std;


class Grocery 
{

    private:

    char item[100];
    int price;
    char cat[100];
    float rate;


public:

 void setData(int i){
    cout << "item["<< i<<"].item: ";
     cin >> this->item;
       cout << "item["<< i<<"].price: ";
     cin >> this->price;
        cout << "item["<< i<<"].cat: ";
        cin >> this->cat;
       cout << "item["<< i<<"].rate: ";
        cin >> this->rate;
}

void getData(){
    
    cout << " item: " << item 
       <<  " price: "<< price 
       << " cat: " <<  cat 
       << " rate: " << rate << endl;
}


};


int main(){

    int size;

  cout << "size: ";
    cin >> size;

    Grocery item[size];

  
    for(int i=0; i<size; i++){
           item[i].setData(i);
    }
   

  
    for(int i=0; i<size; i++){
           item[i].getData();
    }


    return 0;
}