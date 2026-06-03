///program to recursive sum of digits

#include<stdio.h>
int sum_digits(int n){
if(n%10==0){
    return n;}
    else{
        return  n%10+sum_digits(n/10);
    }
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("sum of digits of %d is %d",n,sum_digits(n));
return 0; }