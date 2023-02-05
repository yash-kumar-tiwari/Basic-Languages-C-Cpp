// program showing concept of Method Overloading

#include <iostream>
using namespace std;
class Greater
{
public:
    void greater(int a, double b)
    {
        double res = a > b ? a : b;
        cout << res << " is Greater. " << endl;
    }
    void greater(double a, int b)
    {
        double res = a > b ? a : b;
        cout << res << " is Greater. " << endl;
    }
};
int main()
{
    Greater obj;
    obj.greater(15, 6.2);
    obj.greater(122.7, 110);
    return 0;
}