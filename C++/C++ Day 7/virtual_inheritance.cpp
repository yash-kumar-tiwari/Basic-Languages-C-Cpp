// program showing concept of Diamond Shape Ambiguity and Virtual Base Class (Virtual Function)

#include <iostream>
using namespace std;
class A
{
    public :
    void show()
    {
        cout<<"Show Method Called."<<endl;
    }
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
};
int main()
{
    D obj;
    obj.show();
}