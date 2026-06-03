/// program to recursive fibonacci

#include<stdio.h>
int fibonacci(int n){
    if(n==1){
        return 0;}
    else if(n==2){
        return 1;} 
    else{
        return fibonacci(n-1)+fibonacci(n-2);}
    }
int main(){
    int i, n;
    printf("enter limit of  fibonacci : ");
    scanf("%d",&n);
    printf("fibonacci series from 1 to %d :\n",n);
    for(i=1;i<=n;i++){
        printf("%d ",fibonacci(i));
    }
return 0; }