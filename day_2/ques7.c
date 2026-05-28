#include<stdio.h>
int main(){
    int n,t,product=1;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n>0){
        t=n%10;
        product*=t;
        n/=10;    
    }
    printf("product of digits = %d",product);
    return 0;
}