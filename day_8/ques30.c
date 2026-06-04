//  program to print number triangle
#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter no. of rows : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("%d ",j);
    }printf("\n");
}
return 0;}