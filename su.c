#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n-1;i++)
{
sum=sum+i;
}
printf("The sum is:",sum);
}
