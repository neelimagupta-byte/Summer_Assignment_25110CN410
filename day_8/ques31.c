// prg to print character triangle
#include<stdio.h>
int main(){
    int n,i,p=65,j;
    printf("enter no. of rows : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
        printf("%c ",65+j);
    }
    printf("\n");}
    return 0;}