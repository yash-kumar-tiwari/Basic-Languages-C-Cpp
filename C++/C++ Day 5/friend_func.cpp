// program showing concept of friend function

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
};
void display(Rectangle rec)
{
    cout << "Length: " << rec.l << endl;
    cout << "Breadth: " << rec.b << endl;
}
int main()
{
    Rectangle rec;
    int l, b;
    cout << "Enter L & B: ";
    cin >> l >> b;
    rec.setData(l, b);
    display(rec);

    return 0;
}