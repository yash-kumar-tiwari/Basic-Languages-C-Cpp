// program showing concept of scope resolution operator
// :: scope resolution operator ---- it represent global variable

#include <iostream>
using namespace std;
int m = 100; // global variable (Scope throughout the Program)
int main()
{
    int m = 200; // local variable (Scope within function)
    cout << "Local m : " << m << endl;
    cout << "Global m : " << ::m << endl;
    {
        int m = 500; // local variable (Scope within function)
        cout << "Local m inside Block: " << m << endl;
        cout << "Global m inside Block: " << ::m << endl;
    }
    cout << "Local m : " << m << endl;
    cout << "Global m : " << ::m << endl;
}
