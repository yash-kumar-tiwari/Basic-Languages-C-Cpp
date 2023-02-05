// program showing concept of passing object in a function & returning object
// from function using friend fucntion

#include <iostream>
using namespace std;
class Distance
{
private:
    int km, m;

public:
    void setData(int km, int m)
    {
        this->km = km;
        this->m = m;
    }
    void display()
    {
        cout << "\t" << km << "\t" << m << endl;
    }
    friend Distance addDistance(Distance d1, Distance d2);
};
Distance addDistance(Distance d1, Distance d2)
    {
        Distance obj;
        obj.km = d1.km + d2.km;
        obj.m = d1.m + d2.m;
        while (obj.m >= 1000)
        {
            obj.km += 1;
            obj.m -= 1000;
        }
        return obj;
    }

int main()
{
    Distance d1, d2, d3;
    int km1, km2, m1, m2;

    cout << "Enter KM & M : ";
    cin >> km1 >> m1;

    cout << "Enter KM & M Again : ";
    cin >> km2 >> m2;

    d1.setData(km1, m1);
    d2.setData(km2, m2);

    cout << "------------------------------\n";
    cout << "\n\tKM\tM\n";
    cout << "------------------------------\n";

    d1.display();
    d2.display();
    d3 = addDistance(d1, d2); // passing object in a function

    cout << "-------------------------------\n";
    d3.display();

    return 0;
}