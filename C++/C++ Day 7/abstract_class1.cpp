// program showing concept of abstract class

#include <iostream>
using namespace std;
class RBI
{
public:
    virtual double rate() = 0;
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
    double rate()
    {
        return 1.87;
    }
};
int main()
{
    SBI sobj;
    BOI boiobj;
    BOB bobobj;

    cout << "Rate by SBI :" << sobj.rate() << endl;
    cout << "Rate by BOI :" << boiobj.rate() << endl;
    cout << "Rate by BOB :" << bobobj.rate() << endl;
}