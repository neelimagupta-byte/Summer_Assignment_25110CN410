// prg to add matrices
#include<stdio.h>
int main(){
    int n,i,k,j,r,c,sum[50][50],m[50][50];
    printf("enter no. of matrices: ");
    scanf("%d",&n);
    printf("enter no of row and column : ");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=0;}
    }
    for(i=0;i<n;i++){
        printf("enter elements in %d matrix : \n",i+1);
        for(j=0;j<r;j++){
            for(k=0;k<c;k++){
                scanf("%d",&m[j][k]);
                sum[j][k]+=m[j][k];}
                }
    }
printf("sum of matrices:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");}
return 0;}