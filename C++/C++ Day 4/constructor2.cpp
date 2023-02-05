// program showing concept of constructor

#include <iostream>
#include <string.h>
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
        rno = 107;
        per = 97.77;
        strcpy(name, "Yash Kumar");
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