// program showing concept of exception handling

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Values of A and B: ";
    cin>>a>>b;

    try 
    {
        if(b==0)
        throw "You are trying to Divide by 0.";
        int c=a/b;
        cout<<"Result: "<<c<<endl;
    }
    catch (const char str[])
    {
        cout<<str<<endl;
    }
}