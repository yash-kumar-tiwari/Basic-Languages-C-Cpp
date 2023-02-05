// program to show " if else " execution

#include <iostream>

using namespace std;

int main()
{
    int a=2,b=2,c=2;
    if(a==b==c)
    cout<< "Statement 1"<<endl;
    else
    cout<< "Statement 2"<<endl;
    return 0;
}


/*

a==b==c
2==2
----
  ^
  |            // because the condition is true then it represent true with 1 
  1==2
  ----
    0         // because the condition is false then it represent it with 0

/*            // because whole condition is false it runs else statement 