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
\
class LL
{
    public:
        Node *head;

        LL(){
            this->head = NULL;
        }

        void start(int ele){
            Node *obj = new Node(ele);
            obj->next = this->head;   //  x001, x002
            this->head = obj;
        }
  
        void view(){
            Node *ptr = this->head;
            while(ptr != NULL){
                cout << ptr->data << " " << ptr << endl;
                ptr = ptr->next;
            }
        }

};

int main(){

    LL list;

    int nodes, ele;
    cout << "nodes: ";
    cin >> nodes;


for(int i=1; i<=nodes; i++){
    cout << "ele:["<< i << "] ";
    cin >> ele;
    list.start(ele);
}

    list.view();

    return 0;
}
