// program showing concept of function template

#include<iostream>
using namespace std;
template<typename T>

void sum(T a, T b)
{
    cout<<"Sum: "<<a+b<<endl;
}
int main()
{
    sum(45,75);
    sum(6.5f,7.7f);
    sum(34.44,56.67);
}