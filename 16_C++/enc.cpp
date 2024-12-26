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

 void setData(char item[], int price, char cat[], float rate){
      strcpy(this->item, item);
        this->price = price;
        strcpy(this->cat, cat);
        this->rate = rate;
}

void getData(){
    
    cout << " item: " << item 
       <<  " price: "<< price 
       << " cat: " <<  cat 
       << " rate: " << rate << endl;
}

};


int main(){

    Grocery item1, item2;

      item1.setData("CHips", 25,  "snacks", 4.2);
      item2.setData("cookes", 35,  "sweet", 4.4);

      item1.getData();
      item2.getData();
  
    return 0;
}