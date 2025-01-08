#include<iostream>
using namespace std;
#include<string.h>

class Stack
{
    private:
    int capacity;
     char *arr;
     int size;
     int top;


    public:

    Stack(int capacity){
        this->capacity = capacity;
        arr = new char[capacity];
        size = 0;
        top = -1;
    }

    ~Stack(){
        delete[] arr;
    }


    void push(char ele){
        
        if(this->top < this->capacity){
            this->top++;
            this->arr[this->top] = ele;
               size++;
        }
        else{
            cout << "stact is overflow...!" << endl;
        }
           

    }


    char pop(){
        if(this->top == -1){
            cout << "stact is underflow...!" << endl;
        }
            // this->top--;
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





    bool isPalindrome(string str){
                        
            for(char s : str){
                push(s);   
            }

            for(char s : str){
                if(s != pop()){
                    return false;
                }
            }
            return true;
    }





};



int main(){

string str;
cout << "Enter String: ";
cin >> str;


Stack Stack(str.size());

if(Stack.isPalindrome(str))
{
    cout << " is palindrome";
}
else 
{
    cout << "not palindrome";
}
    return 0;
}