/// program showing concept of abstract class

#include <iostream>
using namespace std;
class Series
{
public:
    virtual void series(int n, int m) = 0;
};
class evenSeries : public Series
{
public:
    void series(int n, int m)
    {
        cout << "\nEven No. Series: \n";
        for (int i = n; i <= m; i++)
        {
            if (i % 2 == 0)
                cout << i << "\t";
        }
    };
};
class oddSeries : public Series
{
public:
    void series(int n, int m)
    {
        cout << "\nOdd No. Series: \n";
        for (int i = n; i <= m; i++)
        {
            if (i % 2 != 0)
                cout << i << "\t";
        }
    };
};
int main()
{
    evenSeries obj1;
    oddSeries obj2;
    int n, m;
    cout << "Enter Initial and Final value :";
    cin >> n >> m;
    obj1.series(n, m);
    obj2.series(n, m);
}