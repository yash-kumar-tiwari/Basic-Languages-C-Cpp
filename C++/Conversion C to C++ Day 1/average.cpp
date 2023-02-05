// program to find out average of three numbers

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Value of A: ";
    cin >> a;
    cout << "Enter Value of B: ";
    cin >> b;
    cout << "Enter Value of C: ";
    cin >> c;

    int total = a + b + c;
    double avg = total / 3.0;

    cout<< "Average: "<< avg << endl;
cout<< "Average: "<<setprecision(2)<< avg << endl;
cout<< "Average: "<< fixed << setprecision(2) << avg << endl;
    return 0;
}