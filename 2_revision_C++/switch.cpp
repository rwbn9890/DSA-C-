#include<iostream>

using namespace std;

int main(){

    int choice ;

cout << "press 1 for pizza" << endl;
cout << "press 2 for burger" << endl;
cout << "press 3 for sandwatch" << endl;

    cout << "choice: ";
        cin >> choice;

    switch(choice){
        case 1:
            int b;
            cout <<"you ordered pizza" << endl;
            cout <<"chose the type:" <<endl;

            cout << "press 1 for margaritta" << endl;
            cout << "press 2 for doublechees" << endl;
            cout << "press 3 for onion" << endl;
            cout << "type:";
            cin >> b;

                switch (b)
                {
                case 1:
                    cout << "you ordred margaritta pizza";
                    break;
                case 2:
                    cout << "you ordred dbl cheese pizza";
                    break;
                case 3:
                    cout << "you ordred onion pizza";
                    break;
                default:
                    cout << "this pizza  type is not available";
                    break;
                }

            break;
        case 2:
            cout <<"you ordered Burger";
            break;
        case 3:
            cout <<"you ordered Sandwitch";
            break;
        default:
            cout <<"choice valid option";
    }


    return 0;
}