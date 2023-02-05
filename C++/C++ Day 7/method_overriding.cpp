// program showing concept of method overriding

#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Show Method of Parent Class Called" << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        Parent::show();
        cout << "Show Method of Child Class Called" << endl;
    }
};
int main()
{
    Child cobj;
    cobj.show();
}