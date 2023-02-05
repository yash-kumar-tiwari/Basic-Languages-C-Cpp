// program showing concept of abstract class

#include <iostream>
using namespace std;
class RBI
{
public:
    virtual double rate() = 0;
    RBI()
    {
        cout << "Welcome To Bank." << endl;
    }
    double finalSum(double rate, int bal)
    {
        return bal + bal * rate / 100;
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
    double rate()
    {
        return 1.87;
    }
};
int main()
{
    int bal;
    cout << "Enter Amount: ";
    cin >> bal;

    RBI *ptr;
    SBI sobj;
    ptr=&sobj;
    cout << "\nRate by SBI: " << sobj.rate() << endl;
    cout << "Final Sum: " << sobj.finalSum(sobj.rate(), bal) << endl;

    BOI boiobj;
    ptr=&boiobj;
    cout << "\nRate by BOI: " << boiobj.rate() << endl;
    cout << "Final Sum: " << boiobj.finalSum(boiobj.rate(), bal) << endl;

    BOB bobobj;
    ptr=&bobobj;
    cout << "\nRate by BOB: " << bobobj.rate() << endl;
    cout << "Final Sum: " << bobobj.finalSum(bobobj.rate(), bal) << endl;
}