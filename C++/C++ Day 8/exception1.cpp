// program showing concept of exception handling (try with catch)

#include <iostream>
using namespace std;
class Exception
{
    public:
    void divide(int a, int b)
    {
        if (b == 0)
            throw 0.0;
        int c= a/ b;
        cout << "Result:" << c << endl;
    }
};
int main()
{
    Exception obj;
    int a, b;
    cout << "Enter Value of A and B: ";
    cin >> a >> b;

    try
    {
        obj.divide(a, b);
    }
    catch (double d)
    {
        cout << "Divide by 0" << endl;
    }
}