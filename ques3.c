/// program to find factorial

#include<stdio.h>
int main()
{
    int n,fac=1,m;
    printf("enter a number: ");
    scanf("%d",&n);
    m=n;
    if (n==0)
    {
        printf("0! = 1");
    }
    else
    {
        while(n>0){
            fac*=n;
            n--;
        }
        printf(" %d! = %d",m,fac);
    }

}