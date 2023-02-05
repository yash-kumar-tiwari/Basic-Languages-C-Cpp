// program showing concept of class and object

#include <iostream>
using namespace std;
class Demo
{
public:
    void display()
    {
        cout << "Display Method Called" << endl;
    }
};
int main()
{
    Demo obj;  // here obj is a variable of type demo, but demo is a class
    obj.display();
}