// prg to write function to find sum of two numbers
#include<stdio.h>
    int sum(int n,int m){
        return (n+m);
    }
    int main(){
        int n,m;
        printf("enter two intergers : ");
        scanf("%d%d",&n,&m);
        printf("%d + %d = %d",n,m,sum(n,m));
    }

