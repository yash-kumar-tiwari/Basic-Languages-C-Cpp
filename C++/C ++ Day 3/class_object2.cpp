// program showing concept of class and object

#include <iostream>
using namespace std;
class Demo
{
public:
    void add(int a, int b)
    {
        cout << "Sum :" << a + b << endl;
    }
    void sub(int a, int b)
    {
        cout << "Sum :" << a - b << endl;
    }
};
int main()
{
    Demo obj; // here obj is a variable of type demo, but demo is a class
    int a, b;
    cout << "Enter Values of A and B: ";
    cin >> a >> b;

    obj.add(a, b);
    obj.sub(a, b);
}