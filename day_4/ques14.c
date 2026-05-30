/// program to find nth term of fibonacci

#include<stdio.h>
int main(){
    int n,a=0,b=1,sum=0,i;
    printf("enter the nth term : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=a+b;
        
       
        if(i==n){
        
            printf("%dth term of fibonacci is %d.",n,a);
        }a=b;
         b=sum;
        }
    return 0;}