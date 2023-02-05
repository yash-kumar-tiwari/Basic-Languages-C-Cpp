// program showing  the concept of static data member & static member function

#include <iostream>
using namespace std;
class Student
{
private:
    int rno;
    float per;
    static char cname[50];

public:
    Student(int rno, float per)
    {
        this->rno = rno;
        this->per = per;
    }
    void display()
    {
        cout << "Roll Number : " << rno << endl;
        cout << "Percentage : " << per << endl;
        cout << "College Name : " << cname << endl;
    }

    static void getCollegeName()
    {
        cout << "Enter College Name: ";
        cin.getline(cname, 50);
    }
};
char Student ::cname[];

int main()
{
    Student ::getCollegeName();
    Student obj1(107, 78.89), obj2(108, 67.70);
    obj1.display();
    obj2.display();
}