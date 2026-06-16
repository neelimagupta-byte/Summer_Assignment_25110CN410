//prg to find column wise sum
#include<stdio.h>
int main(){
    int n,i,j,sum=0,r,c;
    printf("enter no. of rows and column : ");
    scanf("%d%d",&r,&c);
    int m[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&m[i][j]);}}
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            sum+=m[j][i];}
            printf("sum of column %d: %d\n",i+1,sum);
   sum=0; }
return 0;}