// program showing concept of constructor

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
class Demo
{
private:
    int rno;
    double per;
    char name[50];

public:
    Demo()
    {
        cout << "Enter Roll No.: ";
        cin >> rno;
        cout << "Enter Percentage: ";
        cin >> per;
        getchar();
        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Default Constructor Called " << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rno << endl;
        cout << "Percentage: " << per << endl;
    }
};
int main()
{
    Demo obj;
    obj.display();
    return 0;
}