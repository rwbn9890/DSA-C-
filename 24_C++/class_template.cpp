#include<iostream>
using namespace std;

template< typename T>

class Collection
{
    private:
        int size;
        T *arr;


        public:

        void createArr(int size){
            this->size = size;
            arr = new T[this->size];

            if(arr != NULL){
             cout << "arr is created succesfully...!" << endl;
            }
            else {
                  cout << "arr is created failed...!" << endl;
            }
        }

    void setArr(int index, T element){

        if(index>=0 && index < this->size){
            arr[index] = element;
        }
        else {
            cout <<"erro: index is out of arr size...!" << endl;
        }

    }


      void  getArr(){

            for(int i=0; i<this->size; i++){
                cout << arr[i] << endl;
            }

        }
};


int main(){

Collection<int> obj;

    obj.createArr(5);

    obj.setArr(0, 99);

    obj.getArr();

    Collection <float> obj2;

    obj2.createArr(4);

    obj2.setArr(0, 8.8);
    obj2.setArr(1, 7.9);
    obj2.getArr();


 

    return 0;
}