// program showing concept of memory management (Memory allocation)

#include <iostream>
using namespace std;
int main()
{
    int *ptr;      // create pointer variable of int type
    ptr = new int; // allocates memory dynamically
    *ptr = 100;    // initialize variable

    cout << "Value: " << *ptr << endl;

    delete ptr; // delete or release memory

    cout << "Value : " << *ptr << endl;
}