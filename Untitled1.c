#include <stdio.h>
int main()
{
int i,j,k;
//UPPER HALF //
for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++) // PRINT LEADING SPACES //
{
printf("  ");
}
for(k=1;k<=i;k++) // ASCENDING NUMBERS //
{
printf("%d",k);
}

for(k=i-1;k>=1;k--) // DESCENDING NUMBERS //
{
printf("%d",k);
}
printf("\n");
}
// LOWER HALF //
for(i=4;i>=1;i--)
{
for(j=1;j<=5-i;j++) // PRINT LEADING SPACES //
{
printf("  ");
}
for(k=1;k<=i;k++) // ASCENDING NUMBERS //
{
printf("%d",k);
}
for(k=i-1;k>=1;k--) // DESCENDING NUMBERS //
{
printf("%d",k);
}
printf("\n");
}
return 0;
}
