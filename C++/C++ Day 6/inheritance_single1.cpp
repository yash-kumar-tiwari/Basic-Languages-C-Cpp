// program showing concept of single inheritance

#include <iostream>
using namespace std;
class Dim1
{
protected:
    int l, b;

public:
    int getArea()
    {
        return l * b;
    }
};
class Dim2
{
    protected:
    int h;
};
class Volume : public Dim1, public Dim2
{
public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    int getVolume()
    {
        return getArea() * h;
    }
};

int main()
{
    int l, b, h;
    cout << "Enter l, b and h : " << endl;
    cin >> l >> b >> h;
    Volume obj;
    obj.setData(l, b, h);
    cout << "Area : " << obj.getArea() << endl;
    cout << "Volume : " << obj.getVolume() << endl;
}