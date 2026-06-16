//program to multiply matrices
#include<stdio.h>
int main(){
    int p,r,k,c,n,i,j,r1,c1,r2,c2;
    printf("enter no. of rows columns in MATRIX A: ");
    scanf("%d%d",&r1,&c1);
    int A[r1][c1];
    printf("enter elements in matrix A \n:");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&A[i][j]);}
    }
    printf("enter no. of rows and columns in MATRIX B: ");
    scanf("%d%d",&r2,&c2);
    int B[r2][c2];
    printf("enter element in matrix B :\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&B[i][j]);}}
if(c1==r2){
    r=r1;
    c=c2;
    p=c1;
printf("multiplication of matrices (AB):\n");}
else if(c2==r1){
    r=r2;
    c=c1;
    p=c2;
printf("multiplication of matrices (BA): \n");}
int product[r][c];
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        product[i][j]=0;
    for(k=0;k<p;k++){
        if (c1==r2)
        product[i][j]+=(A[i][k]*B[k][j]);
        else if(c2==r1)
    product[i][j]+=(B[i][k]*A[k][j]);}
    }}
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",product[i][j]);}
    printf("\n");}
return 0;}
