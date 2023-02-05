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
    virtual void display()
    {
        cout << "Display Method of Parent Called" << endl;
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << "Display Method of Child Called." << endl;
    }
};
int main()
{
    Parent obj, *ptr;
    ptr = &obj;
    ptr->show();
    ptr->display();
    
    Child cobj;
    ptr = &cobj;
    ptr->display();
}