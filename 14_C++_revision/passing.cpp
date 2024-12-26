#include <iostream>

using namespace std;

int value(int a, int b)
{
    cout << a + b;
}

int variable(int a, int b)
{
    cout << a + b;
}

int array(int n[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << n[i];
    }
}

int pointer(int *p1, int *p2)
{

    cout << *p1 + *p2;
}

int address(int *p1, int *p2)
{

    cout << *p1 + *p2;
}

int ref(const int &a, const int &b)
{

    cout << a + b;
}

int main()
{

    // value(5, 6);   // passing value

    int x = 6;
    int y = 8;
    // variable(x, y);   // passing value

    // int arr[5] = {1, 2, 3, 4, 5};

    // array(arr);  // passing arr;

    // int *ptr1 = &x;

    // int *ptr2 =&y;

    // pointer(ptr1, ptr2); // pssing pointer

    // address(&x, &y); // reference;

    ref(x, y);

    return 0;
}

#include <stdio.h>

int main()
{

    int opt;

     printf("Choose your operation: ");

    scanf("%d", &opt);

    
    (opt == 1) ?
 printf("one")
  : (opt == 2) ?
   printf("two")
   
                : printf("no vlaue");

    return 0;
}