// program showing concept of method overriding - Banks

#include <iostream>
using namespace std;
class RBI
{
public:
    double rate()
    {
        cout << "Default Rate = 1.00." << endl;
        return 1.00;
    }
};
class SBI : public RBI
{
public:
    double rate()
    {
        return 1.70;
    }
};
class BOI : public RBI
{
public:
    double rate()
    {
        return 1.77;
    }
};
class BOB : public RBI
{
public:
    // double rate()
    // {
    //     return 1.87;
    // }
};
int main()
{
    SBI sobj;
    cout << "Rate Of SBI :" << sobj.rate() << endl;
    BOI boiobj;
    cout << "Rate Of BOI :" << boiobj.rate() << endl;
    BOB bobobj;
    cout << "Rate Of BOB :" << bobobj.rate() << endl;
}