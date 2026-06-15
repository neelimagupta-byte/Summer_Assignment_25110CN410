//prg to subtract matix
#include<stdio.h>
int main(){
    int r,c,n,i,k,j,diff[50][50],m[50][50];
    printf("enter no. of rows column : ");
    scanf("%d%d",&r,&c);
    printf("enter element in matrix 1 : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&diff[i][j]);
        }}
    printf("enter no. of matrices to subtract : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter elements in matrix %d : \n",i+1);
        for(j=0;j<r;j++){
            for(k=0;k<c;k++){
        scanf("%d",&m[j][k]);
        diff[j][k]-=m[j][k];}
        }}
    printf("subtacted matrix : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",diff[i][j]);
        }
    printf("\n");}
    return 0; }