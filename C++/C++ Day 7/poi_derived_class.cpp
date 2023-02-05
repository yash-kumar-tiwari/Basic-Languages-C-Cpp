// program showing concept of pointer to derived class

#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Show Method of Parent Called." << endl;
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << "Display Method of Child." << endl;
    }
};
int main()
{
    Child cobj, *ptr;
    ptr = &cobj;
    ptr->show();
    ptr->display();
}