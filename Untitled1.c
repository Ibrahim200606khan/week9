#include<stdio.h>
// function start //
int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
 fact = fact*i;
}
return fact;
}
// program start //
int main()
{
int n;
printf("ENTER NUMBER FOR FACTORIAL: ");
scanf("%d",&n);
// output //
 printf("FACTORIAL=%d",factorial(n)); // factorial //
}
