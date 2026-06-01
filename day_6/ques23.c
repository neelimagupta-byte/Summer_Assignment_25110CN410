#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n>0){
    if(n%2==1){
        c++;}
        n=n/2;
    }
    printf("number of set bits= %d",c);
}
