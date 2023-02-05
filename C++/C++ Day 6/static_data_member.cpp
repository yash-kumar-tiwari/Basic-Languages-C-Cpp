// program showing  the concept of static data member

#include <iostream>
using namespace std;
class Demo
{
public:
    static int count;
    Demo()
    {
        count++;
    }
};
int Demo::count;
int main()
{
    Demo obj1, obj2, obj3, obj4, obj5;
    cout << "No. of Objects Created : " << Demo::count << endl;
}