// program showing concept of hierarchical inheritance

#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Show Method of Parent Called\n";
    }
};
class Child1 : public Parent
{
    void display()
    {
        cout << "Display Method of Child1";
    }
};
class Child2 : public Parent
{
    void draw()
    {
        cout << "Draw Method of Child2";
    }
};
int main()
{
    Child1 c1;
    Child2 c2;
    c1.show();
    c2.show();
}