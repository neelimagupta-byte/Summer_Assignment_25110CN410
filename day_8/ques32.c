// prg to print repeated number
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter no. of rows : ");
    scanf("%d",&n);
        for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d",i);
        }
   printf("\n"); }
}