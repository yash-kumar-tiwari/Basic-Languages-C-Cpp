// program showing concept of call by address

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After Swapping in Swap:\n a :" << *a << "\n b :" << *b << endl;
}

int main()
{
    int a, b;
    cout << "Enter Value of A and B: ";
    cin >> a >> b;
    cout << "Before Swapping :\n a :" << a << "\n b :" << b << endl;
    swap(&a, &b);
    cout << "After Swapping in Main:\n a :" << a << "\nb :" << b << endl;
}
