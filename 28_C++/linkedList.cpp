#include<iostream>

using namespace std;


class Node
{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    public:
    Node *head;

    LinkedList(){
        this->head = NULL;
    };

    void insertStart(int data){
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
    };


    void insertEnd( int data){
        Node *newNode = new Node(data);
        if(this->head == NULL){
            newNode->next = head;
            this->head = newNode;
        }
        else{
            Node *ptr = this->head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    };

    void insertAtPos( int data, int pos){
        Node *newNode = new Node(data);
       if(pos == 0){
            newNode->next = head;
            this->head = newNode;
       }
       else
       {
        Node *ptr = this->head;
        for(int i=0; i<pos-1; i++){
                ptr = ptr->next;
        }
        newNode->next = ptr->next;
         ptr->next = newNode; 
    }
    }

    void viewAll(){
        Node *ptr = this->head;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

};

int main(){

LinkedList list;

int choice, ele, pos;

do{
    cout << " press 1 for Insert at Start" << endl;
    cout << " press 2 for Insert at end" << endl;
    cout << " press 3 for Insert at positon" << endl;
    cout << " press 4 for view all ele" << endl;
    cout << " press 0 for exit" << endl;

    cout << "choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "ele: ";
        cin >> ele;
        list.insertStart(ele);
        cout << "instred start successfull...!" << endl; 
        break;
    
    case 2:
     cout << "ele: ";
        cin >> ele;
        list.insertEnd(ele);
           cout << "instred end successfull...!" << endl; 
        break;
    
    case 3:
        cout << "pos: ";
        cin >> pos;
     cout << "ele: ";
        cin >> ele;
        list.insertAtPos(ele, pos);
           cout << "instred pos successfull...!" << endl; 
        break;
    
    case 4:
        list.viewAll();
        break;
    
    default:
        cout << "enter valid choice " << endl;
        break;
    }

}
while(choice != 0);


    return 0;
}