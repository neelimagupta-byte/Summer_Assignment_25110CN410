/// program to recursive factorial

#include<stdio.h>
    long long int factorial(int n){
        if(n==1 || n==0){
            return 1;}
        else{
            return n* factorial(n-1);
        }
        }
int main(){
    int n;
    printf(" enter a number : ",n);
    scanf("%d",&n);
    printf("factorial of %d is %lld.",n,factorial(n));
return 0; }