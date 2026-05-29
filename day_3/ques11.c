///program to find gcd

#include<stdio.h>
int main(){
    int n,p,s,i;
    printf("enter two numbers: ");
    scanf("%d%d",&n,&p);
    if(n<=p){
        s=p;
    }
    else{s=n;}
   for(i=s;i>0;i--){
    if(n%i==0 && p%i==0){
        printf("gcd is %d",i);
        break;       
        } }
        return 0;
    }
