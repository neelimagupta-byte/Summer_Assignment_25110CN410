///program to calculate sum of N natural numbers

#include <stdio.h>
int main(){
int num,sum=0,i;
printf("enter no. of natural numbers to sum : ");
scanf("%d",&num);
for(i=1;i<=num;1)
{
sum+=i;
i++;}
printf("sum=%d",sum);
return (0);}