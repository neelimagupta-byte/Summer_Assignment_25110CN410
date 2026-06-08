// function for perfect number
#include<stdio.h>
int prfct_num(int n){
    int i=n-1,t=0;
    while(i>0){
        if(n%i==0){
       t+=i;}
        i--;}
        if(t==n){
            printf("%d is a perfect number.",n);}
        else{printf("%d is not a perfect number.",n);;}}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    prfct_num(n);
}
