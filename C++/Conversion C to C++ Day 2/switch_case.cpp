// program showing concept of switch control statement

#include <iostream>
using namespace std;
int main()
{
    int num = 10, i = 1;
    switch (--i) // switch(i)
    {
    case -4:
        num--;
    case 2:
        num++;

    case 1:
        cout << "num:" << num << endl;

    default:
        cout << "num:" << num-- << endl;
        break;
    }
}

/*
switch (--i) // switch(i)
    {

    default:
        cout << "num:" << num-- << endl;
        break;
    case -4:
        num--;
    case 2:
        num++;

    case 1:
        cout << "num:" << num << endl;


    }
*/