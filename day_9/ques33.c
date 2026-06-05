///print reverse star pattern

#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter a no. of rows : ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
    printf("\n");}
 return 0;}