// program showing concept of friend function

#include <iostream>
using namespace std;
class B;
class A
{
private:
    int num;

public:
    A()
    {
        cout << "Enter Number: ";
        cin >> num;
    }
    friend void sum(A s1, B s2);
};
class B
{
private:
    int num;

public:
    B()
    {
        cout << "Enter Number: ";
        cin >> num;
    }
    friend void sum(A s1, B s2);
};
void sum(A s1, B s2)
{
    cout<< "Sum: "<<s1.num+s2.num<<endl;
}
int main()
{
    A aobj;
    B bobj;
    sum(aobj, bobj);
}