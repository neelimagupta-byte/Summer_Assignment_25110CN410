/// program for fibonacci series

#include<stdio.h>
int main(){
    long long  int a=0,b=1,sum;
    int n;
    printf("enter a limit : ");
    scanf("%d",&n);
    printf("fibonacci series: ");
    while(n>0){
        printf("%lld ",a);
        sum=a+b;
        a=b;
        b=sum;
        n--; }
        return 0;
    }

