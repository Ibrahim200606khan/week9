#include<stdio.h>
// function start //
void fib(int n)
{
int a=0,b=1,c,i;
for(i=0;i<=n;i++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
}
// function end //
int main()
{ int n;
// input //
printf("ENTER UPTO WHERE TO PRINT: ");
scanf("%d",&n);
fib(n); // Run the function named fib and give it the value stored in n //
return 0;
}

