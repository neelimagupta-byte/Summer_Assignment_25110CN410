#include<stdio.h>
int factorial(int n){
    int m,fac=1;
    m=n;
    while(n>0){
        fac*=n;
        n--;}
    return fac;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("factorial of %d is %d.",n,factorial(n));
}