// program showing concept of scope resolution operator

#include <iostream>
using namespace std;
class Demo
{
public:
    void display();
};
class Demo1
{
public:
    void display();
};
void Demo::display()
{
    cout << "Display Method of Demo Called" << endl;
}
void Demo1::display()
{
    cout << "Display Method of Demo1 Called" << endl;
}
int main()
{
    Demo obj;
    obj.display();
    Demo1 obj1;
    obj1.display();
}
