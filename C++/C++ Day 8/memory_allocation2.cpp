// program showing concept of memory allocation

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter No. of Elements: ";
    cin >> num;

    double *ptr;           // creating double type pointer variable
    ptr = new double[num]; // allocating memory dynamic

    for (int i = 0; i < num; i++)
    {
        cout << "Enter Value: ";
        cin >> *(ptr + i); // taking input from user
    }
    for (int i = 0; i < num; i++)
    {
        cout >> *(ptr + i) << "\t" << endl;
    }
    delete[] ptr; // free/release memory
    return 0;
}