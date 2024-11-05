#include <stdio.h>
int main()
{
int n, i,fact=1;
printf("enter the number");
scanf("%d",&n);
begin:
fact=fact*i;
i=i+1;
printf(" factorial of %d is %d  ", n,fact);
if (i < n)
goto begin;
return 0;
}