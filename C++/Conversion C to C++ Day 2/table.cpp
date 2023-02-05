// program to print table of X number

#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << " enter number: ";
    cin >> num;
    for (i = 1; i <= 10; i++)
    {

        cout << num << "x" << i << "=" << num * i << endl;
    }

    /*while loop

    i=1;
    while (i<=10)
    {
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
        i++;
    }
    */

    /*do while loop

     i=1;
     do{
         cout<<num<<"x"<<i<<"="<<num*i<<endl;
         i++;
     }while (i<=10)

     */
}
