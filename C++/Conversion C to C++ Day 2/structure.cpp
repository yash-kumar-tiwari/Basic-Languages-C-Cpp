// program showing concept of structure

#include <iostream>
using namespace std;
struct student
{
    int rno;
    double per;
    char name[50];
    void title()            //function declaration
    {
        cout<<"\n----Student Details----\n";
    }
    void display()          //function declaration
    {
        cout<<"Roll Number :"<<rno<<endl;
        cout<<"Percentage :"<<per<<endl;
        cout<<"Name :"<<name<<endl;

    }
};

int main()
{
    struct student s;
    cout<<"Enter Name:";
    cin.getline(s.name, 50);
    cout<<"Enter Roll Number:";
    cin>>s.rno;
    cout<<"Enter Percentage:";
    cin>>s.per;

    s.title();          // function calling
    s.display();
}
