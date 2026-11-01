#include<stdio.h>
// function start //
int i,j;
void prime(int n)
{int i;
if(n<=1)
{
printf("NOT PRIME"); // for -ve //
return;}
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("NOT PRIME");
return;}
}
printf("PRIME");
}
// function end //
int main()
{
int n;
printf("ENTER NUMBER TO CHECK: ");
scanf("%d",&n);
prime(n);
return 0;
}
