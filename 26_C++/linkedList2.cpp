#include<iostream>
using namespace std;


class Node
{
        public:
        int data;
        Node *next;


};

int main(){

    Node *HEAD, *current;

    HEAD =new Node();
    HEAD->data = 10;
    HEAD->next = NULL;

Node *ptr = HEAD;

    current =new Node();
    current->data = 20;
    current->next = NULL;
    HEAD->next = current;  // current

    current =new Node();
    current->data = 30;
    current->next = NULL;
     HEAD->next->next = current;  //

    current =new Node();
    current->data = 40;
    current->next = NULL;
    HEAD->next->next->next = current;


    // cout << "HEAD:" << HEAD->data << " address: " << HEAD->next <<  endl;
    // cout << "HEAD:" << HEAD->next->data << " address: " << HEAD->next <<  endl;
    // cout << "HEAD:" << HEAD->next->next->data << " address: " << HEAD->next->next <<  endl;
    // cout << "HEAD:" << HEAD->next->next->next->data << " address: " << HEAD->next->next->next <<  endl;




// int digit = 100;
// int i = digit;

// while(i != 0){
//     digit -= 10;


//     i = digit;
// }


while(ptr != NULL){

 cout << "data: " <<  ptr->data << " address: " << ptr << endl;;

 ptr = ptr->next;
}







    

    


    return 0;
}
