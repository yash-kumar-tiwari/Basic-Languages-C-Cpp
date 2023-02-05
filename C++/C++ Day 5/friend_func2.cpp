// program showing concept of friend fucntion

#include <iostream>

using namespace std;
class Square
{
private:
    int num;

public:
    Square()
    {
        cout << "Enter Number : ";
        cin >> num;
    }
    friend void sum(Square s1, Square s2);
};
void sum(Square s1, Square s2)
{
    cout << "Sum : " << s1.num + s2.num << endl;
}
int main()
{
    Square s1, s2;
    sum(s1, s2);

    return 0;
}