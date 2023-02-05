// program to find greater number

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Values of A & B :";
    cin >> a >> b;

    if (a == b)
        cout << "Both are Equal" << endl;
    else
    {
        if (a > b)
            cout << a << " is Greater" << endl;
        else
            cout << b << " is Greater" << endl;
    }
}