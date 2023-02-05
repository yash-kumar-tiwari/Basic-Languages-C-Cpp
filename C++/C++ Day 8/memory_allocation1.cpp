// program showing concept of memory management (Memory allocation)

#include <iostream>
using namespace std;
int main()
{
    double *ptr;      // create pointer variable of double type
    ptr = new double; // allocates memory dynamically
    *ptr = 77.67;    // initialize variable

    cout << "Value: " << *ptr << endl;   // printing value

    delete ptr; // delete or release memory

    return 0;
}