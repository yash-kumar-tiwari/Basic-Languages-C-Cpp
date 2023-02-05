// program showing concept of pattern

#include <iostream>
using namespace std;
int main()
{
    int i, j, row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}