#include<iostream>

using namespace std;

int main(){

int size;
cout << "size: ";
cin >> size;

int arr[size];

for(int i=0; i<size; i++){
    cout << "arr["<<i<<"]: ";
    cin >> arr[i];
}

cout << endl;

int choice;



do{

        cout << endl;
        cout << "press 1 for insertion" << endl;
        cout << "press 2 for update" << endl;
        cout << "press 3 for delete" << endl;
        cout << "press 4 for display" << endl;

        cout << "choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            break;
        case 2:
                  int pos, ele;
                 cout << "enter position: ";
                 cin >> pos;
                 cout << "enter element: ";
                 cin >> ele;
                 arr[pos] = ele;

            break;
        case 3:
                  int posdel;
                 cout << "enter position: ";
                 cin >> posdel;
                 for(int i=posdel; i<size;i++){
                    arr[i] = arr[i+1]; 
                 }

                 size--;

            break;
        case 4:   
                cout << "array = ";
              for(int i=0; i<size; i++){
                cout << arr[i] << " ";
              }
            break;
      
        case 0:
        break;
  }
}while(choice != 0 );


    return 0;
}