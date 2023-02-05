// program showing concept of friend fucntion

#include <iostream>

using namespace std;
class Rectangle
{
private:
    int l, b;

public:
    void setData(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    friend void display(Rectangle rec);
    friend int area(Rectangle rec);
};
void display(Rectangle rec)
{
    cout << "Length: " << rec.l << endl;
    cout << "Breadth: " << rec.b << endl;
}
int area(Rectangle rec)
{
    return rec.l * rec.b;
}
int main()
{
    Rectangle rec;
    int l, b;
    cout << "Enter L & B: ";
    cin >> l >> b;
    rec.setData(l, b);
    display(rec);
    cout << "Area : " << area(rec) << endl;
    return 0;
}