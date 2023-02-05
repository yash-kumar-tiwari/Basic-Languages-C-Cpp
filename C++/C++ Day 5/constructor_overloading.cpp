// program showing concept of Constructor Overloading

#include <iostream>
using namespace std;
class Greater
{
public:
     Greater(int a, double b)
    {
        double res = a > b ? a : b;
        cout << res << " is Greater. " << endl;
    }
     Greater(double a, int b)
    {
        double res = a > b ? a : b;
        cout << res << " is Greater. " << endl;
    }
};
int main()
{
    Greater obj(15, 6.2), obj1(122.7,26);
    return 0;
}