// function to print maximum
#include<stdio.h>
int max(int n,int m)
{
    if(n<m){
        return m;}
    else{ 
        return n;}}
int main(){
    int n,m;
    printf("enter two intergers : ");
    scanf("%d%d",&n,&m);
    printf(" maximum= %d",max(n,m));
return 0;}

