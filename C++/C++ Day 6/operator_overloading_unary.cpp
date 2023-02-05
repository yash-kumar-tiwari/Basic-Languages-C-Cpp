// program showing concept of unary operator overloading

#include <iostream>
using namespace std;
class Demo
{
private:
    int num;

public:
    Demo()
    {
        cout << "Enter Number: ";
        cin >> num;
    }
    void display()
    {
        cout << "Value: " << num << endl;
    }
    void operator++()
    {
        num = num * 100;
    }
};
int main()
{
    Demo obj;
    obj.display();
    ++obj;
    cout<<"\n After Overloading : \n";
    obj.display();
    
}