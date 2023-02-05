//program showing concept of reference variable

#include <iostream>
using namespace std;

int main()
{
    int a=100;
    int &ref=a;
    cout<<"a :"<<a<<endl;
    cout<<"ref :"<<ref<<endl;
    ref=500;
    cout<<"a :"<<a<<endl;
}