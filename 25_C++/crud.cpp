#include<iostream>
#include<vector>

using namespace std;

class Collection
{
    private:
    vector<int> arr;

    public:

    void addElement(int a){
        arr.push_back(a);
    }

    void eraseElement(int i){
        arr.erase(arr.begin() + i);
    }

    void printElement(){
       for( int e: arr){
        cout << e << " "; 
       }
    }


};

int main(){

int ele; 
    Collection obj;

    cout<< "press 1 for add element" << endl;
    cout<< "press 2 for insert element" << endl;
    cout<< "press 1 for add element" << endl;
    cout<< "press 1 for add element" << endl;
    int choice ;
    cout << "enter cholice: ";
    cin >> choice;

    do{

        switch (choice)
        {
        case 1:
                cout << "enter ele: ";
                cin >> ele;
                obj.addElement(ele);
            break;
        
        case 2:
                cout << "enter ele delete: ";
                cin >> ele;
                obj.eraseElement(ele);
            break;
        case 3:
             
                obj.printElement();
            break;
        
        default:
            break;
        }

    }while(choice != 0);


 return 0;
}