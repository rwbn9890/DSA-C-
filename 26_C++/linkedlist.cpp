#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};


int main(){

    // int *a;
    // a = new int(10)

    // int *b = new int(10);
// Node *obj1, *obj2;


    Node *obj = new Node();
    Node *obj2 = new Node(); 
    Node *obj3 = new Node();
    obj->data = 20;
    obj->next = NULL;



    obj2->data = 99;
    obj2->next = NULL;
    obj->next = obj2;


    obj3->data = 99;
    obj3->next = NULL;
    obj2->next = obj3;


    cout << "HEAD:" << obj->data << " address: " << obj->next <<  endl;
    cout << "HEAD:" << obj2->data << " address: " << obj2->next <<  endl;
    cout << "HEAD:" << obj3->data << " address: " << obj3->next <<  endl;




    return 0;
}