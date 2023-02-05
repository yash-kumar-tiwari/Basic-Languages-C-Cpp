// program showing concept of exception handling (try with multiple catch)

#include <iostream>
using namespace std;
class Exception
{
public:
    void divide(int a, int b)
    {
        try
        {
            if (b == 0)
                throw 0;
            int c = a / b;

            if (c >= 5)
                throw 'a';
            cout << "Result:" << c << endl;
        }
        catch (int d)
        {
            cout << "Divide by Zero." << endl;
        }
        catch (char d)
        {
            cout << "Result Greater than / equal to 5" << endl;
        }
    }
};
int main()
{
    Exception obj;
    int a, b;
    cout << "Enter Value of A and B: ";
    cin >> a >> b;

        obj.divide(a, b);
}