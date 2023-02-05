// program showing concept of copy constructor (deep copy)

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
class Demo
{
private:
    int rno;
    double per;
    char name[50];

public:
    Demo(int rno, char name[], double per)
    {
        this->rno = rno;
        strcpy(this->name, name);
        this->per = per;

        cout << "Parameterized Constructor Called " << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rno << endl;
        cout << "Percentage: " << per << endl;
    }
    /*Copy Constructor*/
    Demo (const Demo &obj)
    {
        rno=obj.rno;
        per=obj.per;
        strcpy(name,obj.name);
    }
};
int main()
{
    int rno;
    double per;
    char name[50];

    cout << "Enter Roll No.: ";
    cin >> rno;
    cout << "Enter Percentage: ";
    cin >> per;
    getchar();
    cout << "Enter Name: ";
    cin.getline(name, 50);

    Demo obj(rno, name, per), obj1(obj);
    obj.display();

    cout << "\n----After Copying----\n";
    obj1.display();
    return 0;
}