///program to count digit in number

#include<stdio.h>
int main(){
    int n,count=0,m;

    printf("enter a number: ");
    scanf("%d",&n);
    m=n;
    while (m>0)
    {count++;
    m/=10;
}
printf("digit in %d is %d ",n,count);
return(0);
}