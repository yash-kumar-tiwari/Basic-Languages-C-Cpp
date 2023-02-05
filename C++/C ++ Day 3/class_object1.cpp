// program showing concept of class and object

/*
for example:
class universal
{
    private:      --------------> "Access Specifier"
           faculty                       or
    public:       --------------> "Access Modifier"
           front office
}

universal.obj1,obj2
         (Students)
*/

#include <iostream>
using namespace std;
class Demo
{
private:
    int rno = 07;

public:
    void display()
    {
        cout << "Display Method Called & Roll Number: " << rno << endl;
    }
};
int main()
{
    Demo obj; // here obj is a variable of type demo, but demo is a class
    obj.display();
}