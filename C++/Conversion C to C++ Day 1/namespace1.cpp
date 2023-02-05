// Program Showing Concept of Namespace

#include <iostream>
using namespace std;
namespace myspace1
{
    int a = 100;
};
namespace myspace2
{
    int a = 200;
};

using namespace myspace1;

int main()
{
    cout << "a of myspace1 :" <<myspace1:: a << endl;
    cout << "a of myspace2 :" <<myspace2:: a << endl;
}