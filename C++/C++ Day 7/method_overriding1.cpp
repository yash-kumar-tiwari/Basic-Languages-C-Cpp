// program showing concept of method overriding - shapes example

#include <iostream>
using namespace std;
class Parent
{
public:
    void shape()
    {
        cout << "Default Shape." << endl;
    }
};
class Circle : public Parent
{
public:
    void shape()
    {
        cout << "Circle Shape." << endl;
    }
};
class Square : public Parent
{
public:
    void shape()
    {
        cout << "Square Shape." << endl;
    }
};
class Rectangle : public Parent
{
public:
    void shape()
    {
        cout << "Rectangle Shape." << endl;
    }
};

int main()
{
    Circle c1;
    c1.shape();
    Square s1;
    s1.shape();
    Rectangle r1;
    r1.shape();
}