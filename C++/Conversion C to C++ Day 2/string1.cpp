// program showing concept of string

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string fname, lname; // string is datatype available in c++

    cout << "Enter First Name: ";
    cin >> fname;
    getchar();
    cout << "Enter Last Name: ";
    getline(cin , lname);
    cout << "Full Name: " << fname << " " << lname << endl;
}