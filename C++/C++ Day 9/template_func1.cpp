// program showing concept of function template

#include<iostream>
using namespace std;
template<typename T>

void swapdemo(T a, T b)
{
    T temp=a;
    a=b;
    b=temp;

    cout<<"\nAfter Swapping\nA : "<<a<<"\nB : "<<b<<endl;
}
int main()
{
    swapdemo(45,75);
    swapdemo('a','b');
}