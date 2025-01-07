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


    void pop(){
        if(this->top == -1){
            cout << "stact is underflow...!" << endl;
        }
            this->top--;
              size--;
    }

    void peek(){
        if(this->top == -1){
            cout << "stact is underflow...!" << endl;
        }
         
            cout << "| " << this->arr[this->top] << " |" << endl;
               cout << " ---- " << endl;
    }

    void isEmpty(){
        if(this->top == -1){
            cout << " TRUE " << endl;
        }
        else
        {
            cout << "FASEL " << endl;
        }
            
    }

    void isFull(){
        if(this->top == this->capacity-1){
            cout << " Stack is Full...! " << endl;
        }
        else
        {
                     cout << " Stack is Not FULL...! " << endl;
        }   
    }

    void Size(){
        if(this->top  == -1){
            cout << "stact is underflow...!" << endl;
        }
        else
        {
              cout << "size: " << size << endl;
        }   
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


int choice, ele, pos;

do{
    cout << " press 1 for push" << endl;
    cout << " press 2 for pop" << endl;
    cout << " press 3 for peek" << endl;
    cout << " press 4 for is empty" << endl;
    cout << " press 5 for is full" << endl;
    cout << " press 6 for size" << endl;
    cout << " press 7 for view all" << endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    cout << "ele: ";
    cin >> ele;
        Stack.push(ele);
        break;
    
    case 2:
        Stack.pop();
        break;
    
    case 3:
    Stack.peek();
        break;
    
    case 4:
        Stack.isEmpty();
        break;
    
    case 5:
     Stack.isFull();
        break;
    
    case 6:
          Stack.Size();
        break;

    case 7:
        Stack.view();
        break;
    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}
while(choice != 0);





    return 0;
}