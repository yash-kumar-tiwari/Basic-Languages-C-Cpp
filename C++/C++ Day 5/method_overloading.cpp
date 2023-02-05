// program showing concept of Method Overloading

#include <iostream>
using namespace std;
class Overload
{
public:
    void sum(int a, int b)
    {
        cout << "Sum: " << a + b<< endl;
    }
     void sum(int a, int b, int c)
    {
        cout << "Sum: " << a + b + c<< endl;
    }
     void sum(int a, int b, int c, int d)
    {
        cout << "Sum: " << a + b + c + d << endl;
    }
};
int main()
{
    Overload obj;
    obj.sum(1, 2);
    obj.sum(1, 2, 3);
    obj.sum(1, 2, 3, 4);
    return 0;
}