#include<stdio.h>

void main()
{
int i,value,sum=0;
printf("\n enter a value to mind the sum of numbers ");
scanf("%d",&value);
for (i=0;i<value;i++)
{
  sum+=i;
printf("the sum is :%d\n",sum);
}
}
