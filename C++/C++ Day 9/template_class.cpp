// program showing concept of function template

#include <iostream>
using namespace std;
template <class T>

class Demo
{
public:
    void swapdemo(T a, T b)
    {
        T temp = a;
        a = b;
        b = temp;

        cout << "\nAfter Swapping\nA : " << a << "\nB : " << b << endl;
    }
};

int main()
{
    Demo<int> obj1;
    obj1.swapdemo(45, 75);
    Demo<char> obj2;
    obj2.swapdemo('a', 'b');
}