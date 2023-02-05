// program showing  the concept of static data member & static member function

#include <iostream>
using namespace std;
class Demo
{
private:
    static int count;

public:
    Demo()
    {
        count++;
    }
    static void getCount()
    {
        cout << "No. of Objects Created : " << count << endl;
    }
};
int Demo::count;
int main()
{
    Demo obj1, obj2, obj3, obj4, obj5;
    Demo::getCount();
}