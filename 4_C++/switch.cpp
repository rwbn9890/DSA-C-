#include<iostream>

using namespace std;

int main(){



    // if(a ==1){
    //     cout << "present";
    // }
    // else if( a==0){
    //     cout << "absent";
    // }
    // else {
    //     cout << "nutral";
    // }

   int a;
do{


    cout << "menu: " << endl;
    cout << "press 1 for Pizza: " << endl;
    cout << "press 2 for Burger: " << endl;
    cout << "press 3 for Sandwitch: " << endl;
    cout << "press 4 for pasta: " << endl << endl;
    cout << "Enter your choice: ";
    cin >> a;

    cout << endl;

    switch(a){
        case 1 :
            cout << "your Ordered Pizza not choose the type:" << endl;
                cout << "press 1 for onion Pizza" << endl;
                cout << "press 2 for  Margaritta" << endl;
                cout << "press 3 for  Cheese bursth" << endl;
                cout << "press 4 for  sweet corn pizza" << endl;
                int b;
                cout << "Enter pizza type:";
                cin >> b;

                cout << endl;

                        switch(b){
                            case 1:
                                cout << "you ordered oninon pizza" << endl;
                                break;
                            case 2:
                                cout << "you ordered Margaritta" << endl;
                                break;
                            case 3:
                                cout << "you ordered Cheese bursth" << endl;
                                break;
                            case 4:
                                cout << "you ordered sweet corn pizza" << endl;
                                break;
                            default:
                                cout << "this pizza type is not available" << endl;
                                break;
                        }


            break;
        case 2 :
            cout << "your Ordered Burger";
            break;
        case 3 :
            cout << "your Ordered Sandwitch";
            break;
        case 4 :
            cout << "your Ordered pasta";
            break;
        default :
            cout << "your order is not on menu";
            break;
    }



}while(a != 0);


    return 0;
}