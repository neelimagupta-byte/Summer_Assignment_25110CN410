//prg for sum of diagonal elment
#include<stdio.h>
int main(){
int r,c,i,j,m[50][50],d=0;
    printf("enter no. of row and column : ");
    scanf("%d%d",&r,&c);
    printf("enter elements in matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]); }}
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j)
            d+=m[i][j];}}
    printf("sum of diagonal elements : %d",d);
      return 0; }