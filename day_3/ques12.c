/// program to find lcm

#include<stdio.h>
int main(){
    int s,n,p;
    printf("enter two numbers : ");
    scanf("%d%d",&n,&p);
    if (n<=p){
        s=n;
    }
    else{s=p;}
    while(s>0){
        if(s%n==0 && s%p==0){
        printf("lcm of %d and %d is %d",n,p,s);
        break;
        }
        else{s++;}
    }
    return 0 ;
}