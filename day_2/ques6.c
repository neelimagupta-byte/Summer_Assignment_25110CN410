/// program to reverse a number
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,count=0,t,rev=0;
    printf("enter a number : ");
    scanf("%d",&n);
    m=n;
    while(n>0){
            t=n%10;  
        rev=rev*10+t;
        n/=10;
        }
    printf("%d",rev);
return(0);}

