// program showing concept of Default Argument

#include <iostream>
using namespace std;
class Default
{
public:
    void sum(int a, int b, int c = 0, int d = 0)
    {
        cout << "Sum: " << a + b + c + d << endl;
    }
};
int main()
{
    Default obj;
    obj.sum(1, 2);
    obj.sum(1, 2, 3);
    obj.sum(1, 2, 3, 4);
    return 0;
}