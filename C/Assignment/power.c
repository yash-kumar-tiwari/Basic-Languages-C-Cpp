#include <stdio.h>
#include <math.h>

int main()
{
int n, p, ans;

printf("Enter Number\n");
scanf("%d", &n);

printf("Enter Power\n");
scanf("%d", &p);

ans = pow(n, p);

printf("Answer :%d\n", ans);

return 0;
}