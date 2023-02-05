// program showing concept of array of objects

#include <iostream>
#include <stdio.h>

using namespace std;
class Library
{
private:
    char bname[50], aname[50]; // bookName, authorName
public:
    void getDetails()
    {
        cout << "Enter Book Name: ";
        cin.getline(bname, 50);

        cout << "Enter Author Name: ";
        cin.getline(aname, 50);
    }
    void showDetails()
    {
        cout << "\t" << bname << "\t" << aname << endl;
    }
};

int main()
{
    Library book[50];

    int num;
    cout << "Enter Number of Books: ";
    cin >> num;

    getchar();
    for (int i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " Book Details\n";
        book[i].getDetails();
    }
    cout<<"\n-------Book Details------\n";
for (int i = 0; i < num; i++)
    {
        book[i].showDetails();
    }
    return 0;
}