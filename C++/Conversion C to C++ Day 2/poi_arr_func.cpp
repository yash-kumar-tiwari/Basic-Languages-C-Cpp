// program showing concept of pointer/array/function

#include <iostream>
using namespace std;

int size, i; // global variable

int *printarray(int arr[])
{
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << "Enter Array Elements: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int *ptr, arr[50];
    ptr = printarray(arr);
    cout << "\n Array Elements are: \n";
    for (i = 0; i < size; i++)
    {
        cout << *(ptr + i) << "\t";
    }
}