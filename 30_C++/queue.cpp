#include<iostream>
using namespace std;


class Queue
{
    private:
    int *arr;
    int size;
    int front;
    int rear;
    int cap;

    public:

    Queue(int cap){
        this->cap = cap;
        arr = new int[cap];
        this->size = 0;
        this->front = -1;
        this->rear = -1;
    }

    ~Queue(){
        delete[] arr;
    }

    void Enqueue(int ele){
        if(this->front == -1 && this->rear == -1){
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = ele;
            size++;
        }
        else if(size == this->cap){
            cout << "Queue is Overlflow...!" << endl;
        }
        else {
            this->rear++;
            this->arr[this->rear] = ele;
             size++;
        }
    }


      void Dequeue(){
            if(this->front == -1 && this->rear == -1){
                cout << "Queue is Empty...!" << endl;
            }
             else if(this->front == this->rear)
             {
                this->front = -1;
                this->rear = -1;
                size--;
             }
             else{
                this->front++;
                size--;
             }
        }


    void Front(){
         if(this->front == -1 && this->rear == -1){
                cout << "Queue is Empty...!" << endl;
            }
            else
            {
                cout << this->arr[this->front] << endl;
            }
    }


    void Rear(){
         if(this->front == -1 && this->rear == -1){
                cout << "Queue is Empty...!" << endl;
            }
            else
            {
                cout << this->arr[this->rear] << endl;
            }
    }

    void isEmpty(){
         if(this->front == -1 && this->rear == -1){
                cout << "Queue is Empty...!" << endl;
            }
            else{
                cout << "Queue is not Empty...!" << endl;
            }
    }


    void isFull(){
         if(size == this->cap){
                cout << "Queue is FUll...!" << endl;
            }
            else{
                cout << "Queue is not FUll...!" << endl;
            }
    }


    void sizing(){
            cout << "size: " << size << endl;
    }


    void display(){
            if(this->front == -1 && this->rear == -1){
                cout << "Queue is Empty...!" << endl;
            }
           else{
                    cout << "--------------------------" << endl;
                    cout << "  ";
                for(int i = this->front; i<=this->rear; i++){
                    cout << this->arr[i] << " ";
                }
                    cout << "  ";
                    cout << "-------------------------" << endl;
           }
    }


};


int main(){

int cap;
cout << "capacity: ";
cin >> cap;

Queue Queue(cap);


int choice, ele;

do{
    cout << " press 1 for Enqueue" << endl;
    cout << " press 2 for Dequeue" << endl;
    cout << " press 3 for Front" << endl;
    cout << " press 4 for Rear" << endl;
    cout << " press 5 for isempty" << endl;
    cout << " press 6 for isfull" << endl;
    cout << " press 7 for size" << endl;
    cout << " press 8 for display" << endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "ele: ";
        cin >> ele;
        Queue.Enqueue(ele);
        break;
    
    case 2:
        Queue.Dequeue();
       break;
    
    case 3:
        Queue.Front();
        break;
    
    case 4:
        Queue.Rear();
        break;
    
    case 5:
        Queue.isEmpty();
        break;
    
    case 6:
         Queue.isFull();
        break;

    case 7:
        Queue.sizing();
        break;
    
    case 8:
        Queue.display();
        break;
    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}
while(choice != 0);





    return 0;
}