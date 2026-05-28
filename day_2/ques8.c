#include<stdio.h>
int main(){
    int n,rev=0,t,m;
    printf("enter a number: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        t=n%10;
        rev=rev*10+t;
        n/=10;
    }
    if (m==rev){
        printf("%d is a palindrome.",m);
    }
    else{
        printf("Not a palindrome.");
    }
return 0;   
}