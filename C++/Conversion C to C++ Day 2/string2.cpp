// program showing concept of string

#include <iostream>
#include <stdio.h>

using namespace std;

void getConvert(char str[50])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        else if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        else
            str[i] = '*';
    }
    cout << "String :" << str << endl;
}
int main()
{
    char str[50];
    cout << "Enter String:";
    cin.getline(str, 50);
    getConvert(str);
}
