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



int main(){

   Node *head, *end;

    int nodes, ele;
    cout << "nodes: ";
    cin >> nodes;


head=NULL;
for(int i=1; i<=nodes; i++){
    cout << "ele:["<< i << "] ";
    cin >> ele;

      Node *obj = new Node(ele);
            obj->next = head;   //  x001, x002
           head = obj;
}



   Node *ptr = head;
            while(ptr != NULL){
                cout << ptr->data << " " << ptr << endl;
                ptr = ptr->next;
            }



    return 0;
}
