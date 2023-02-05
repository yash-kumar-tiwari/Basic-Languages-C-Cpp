// program showing concept of abstract class

#include <iostream>
using namespace std;
class Abstract
{
public:
    virtual void display() = 0;
};
class Child : public Abstract
{
public:
    void display()
    {
        cout << "Display Method Called." << endl;
    }
};
int main()
{
    Child cobj;
    cobj.display();
    
}