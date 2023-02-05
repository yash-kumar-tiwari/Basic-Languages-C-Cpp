// program showing concept of how constructor & display method called

#include <iostream>
using namespace std;
class Dim1
{
public:
    Dim1()
    {
        cout << "Dim1 Constructor." << endl;
    }
    void display()
    {
        cout << "Display Method of Dim1 called." << endl;
    }
};
class Dim2
{
public:
    Dim2()
    {
        cout << "Dim2 Constructor." << endl;
    }
    void display()
    {
        cout << "Display Method of Dim2 called." << endl;
    }
};
class Volume : public Dim2, public Dim1
{
};

int main()
{
    Volume obj;
    obj.Dim1::display();
    obj.Dim2::display();
}