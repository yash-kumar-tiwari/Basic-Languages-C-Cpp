// program showing concept of hybrid inheritance

#include <iostream>
#include <string.h>
using namespace std;
class Student
{
protected:
    int rno;
    char name[50];
};
class Marks : public Student
{
protected:
    int p, c, m;
};
class Sessional
{
protected:
    int in, ex;
};
class Result : public Marks, public Sessional
{
public:
    void setData(int rno, char name[], int p, int c, int m, int in, int ex)
    {
        this->rno = rno;
        strcpy(this->name, name);
        this->p = p;
        this->c = c;
        this->m = m;
        this->in = in;
        this->ex = ex;
    }
    void display()
    {
        cout << "Roll Number: " << rno << endl;
        cout << "Name: " << name << endl;
        cout << "\nPhysics: " << p << endl;
        cout << "Chemistry: " << c << endl;
        cout << "Mathematics: " << m << endl;
        cout << "\nInternal: " << in << endl;
        cout << "External: " << ex << endl;
    }
    void calculate()
    {
        int total = p+c+m+in+ex;
        cout<<"Total Marks: "<<total<<endl;
        double per=total/5.0;
        cout<<"Percentage: "<<per<<endl;
    }
};
int main()
{
    int rno, p, c, m, in, ex;
    char name[50];
    cout << "Enter Name: ";
    cin.getline(name, 50);
    cout << "Enter Roll Number: ";
    cin >> rno;
    cout << "Enter P, C, M Marks: ";
    cin >> p >> c >> m;
    cout << "Enter Internal & External Marks: ";
    cin >> in >> ex;

    Result obj;
    obj.setData(rno, name, p, c, m, in, ex);
    obj.display();
    obj.calculate();
}