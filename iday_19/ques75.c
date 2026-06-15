//program to traspose matrix
#include<stdio.h>
int main(){
    int n,i,j,k,r,c;
    printf("enter no. of rows and columns : ");
    scanf("%d%d",&r,&c);
    int m[r][c];
    printf("enter element in Matrix :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]);    
        }}
        printf("Traspose Matrix : \n");
        for(i=0;i<c;i++){
            for(j=0;j<r;j++){
                printf("%d ",m[j][i]);
            }
            printf("\n");}
return 0;}