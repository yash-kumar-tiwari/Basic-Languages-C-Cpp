// coversion of metre to kilometre

#include <stdio.h>

int main()
{
    float km;
    int met, choice;

    printf("Enter Choice: ");
    scanf("%d", &choice);

if (choice==1)
{
    printf("Enter Distance in Metre: ");
    scanf("%d", &met);

    km = met / 1000;

    printf("%d in km : %.2f\n", met, km);
}
else
{
    printf("Enter Distance in KM: ");
    scanf("%f", &km);

    met = km * 1000;

    printf("%f in km : %d\n", km, met);

}
    return 0;
}

// //C Program To Convert Kilometers into Meters
// #include<stdio.h>
// int main(){
//   int m;
//   float km;
  
//   //Asking for input
//   printf("Enter the distance in kilometers: ");
//   scanf("%f", &km);
  
//   //Kilometers into meters
//   m = km * 1000;
//   printf("%.2f in Kilometers = %d in Meters", km, m);
//   return 0;
// }