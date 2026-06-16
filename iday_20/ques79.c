//prg to find row wise sum
#include<stdio.h>
int main(){
    int i,j,r,c,sum=0;;
    printf("enter no. of row and column : ");
    scanf("%d%d",&r,&c);
    int m[r][c];
    printf("enter element : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]);}}
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum+=m[i][j];}
            printf("sum of row %d: %d\n",i+1,sum);
        sum=0;}
   return 0; }