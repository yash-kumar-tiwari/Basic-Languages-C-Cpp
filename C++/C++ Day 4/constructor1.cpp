// program showing concept of constructor

#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        int rno=107;
        double per=97.77;
        char name[50]="Yash Kumar";
        cout << "Default Constructor Called " << endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rno<<endl;
        cout<<"Percentage: "<<per<<endl;

    }
};
int main()
{
    Demo obj;
    return 0;
}