// Program Showing Concept of Namespace

#include <iostream>
using namespace std;
namespace myspace1
{
    int a = 100;
    void display()
    {
          cout << "a of myspace1 :" <<myspace1:: a << endl;
    }
};
namespace myspace2
{
    int a = 200;
    void display()
    {
          cout << "a of myspace1 :" <<myspace2:: a << endl;
    }
};

using namespace myspace1;

int main()
{
   myspace1::display();
   myspace2::display();
}