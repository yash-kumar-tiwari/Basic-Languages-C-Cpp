// program to print hello world with manipulator

#include <iostream>
#include<iomanip>     // <iomanip> is manipulator header file (input output manipulator)
using namespace std;
int main()
{
    cout << "Hello World"<< "\n";
    cout <<setw(15)<< "Hello World" << endl;
}