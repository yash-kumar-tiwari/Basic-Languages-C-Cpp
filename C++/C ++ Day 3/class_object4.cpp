// program showing concept of class and object

#include <iostream>
using namespace std;
class Demo
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void add()
    {
        cout << "Sum :" << a + b << endl;
    }
    void sub()
    {
        cout << "Sub :" << a - b << endl;
    }
    void mul()
    {
        cout << "Mul :" << a * b << endl;
    }
};
int main()
{
    Demo obj;
    int a, b;

    cout << "Enter Values of A and B: ";
    cin >> a >> b;

    obj.setData(a, b);
    obj.add();
    obj.sub();
    obj.mul();
}