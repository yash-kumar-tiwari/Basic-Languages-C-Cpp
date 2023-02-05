// program showing concept of Method Overloading

#include <iostream>
using namespace std;
class Greater
{
public:
    void greater(int a, int b)
    {
        int res = a > b ? a : b;
        cout <<res<< "is Greater. "<< endl;
    }
    void greater(int a, int b, int c)
    {
        int res = a > b ?(a>c?a:c) : (b>c?b:c);

        cout <<res<< "is Greater. "<< endl;
    }
};
int main()
{
    Greater obj;
    obj.greater(1, 2);
    obj.greater(1, 2, 3);
    return 0;
}