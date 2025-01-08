#include<iostream>
using namespace std;

class Stack
{
    private:
    int capacity;
     int *arr;
     int size;
     int top;


    public:

    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
        top = -1;
    }

    ~Stack(){
        delete[] arr;
    }


    void push(int ele){
        
        if(this->top < this->capacity){
            this->top++;
            this->arr[this->top] = ele;
               size++;
        }
        else{
            cout << "stact is overflow...!" << endl;
        }
           

    }


    int pop(){
        if(this->top == -1){
            cout << "stact is underflow...!" << endl;
        }
            this->top--;
              size--;

              return arr[top--];
    }


    void view(){
        if(this->top  == -1){
            cout << "stact is underflow...!" << endl;
        }
        else
        {
          
             for(int i=this->top; i>=0; i--){
                cout  << "| " << this->arr[i] << " |"  <<endl;
             }
                cout << " ---- " << endl;
        }    
    }



};



int main(){
int capacity;
    cout << "enter capcity: ";
cin >> capacity;

Stack Stack(capacity);


while(capacity !=0 ){
    Stack.push(capacity%2);
    capacity = capacity/2;
}


Stack.view();











    return 0;
}