// function for fibonacci 
#include<stdio.h>
int fibonacci(int n){
    int a=0,b=1,sum=0;
    while(n>0){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
        n--;    
    }}
int main(){
    int n,t;
    printf("enter no of term : ");
    scanf("%d",&n);
    printf("fibonacci upto %d terms are : ",n);
        fibonacci(n);

    }
    