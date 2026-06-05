/// print hollow square pattern

#include<stdio.h>
int main(){
    int i,p,j,n;
    printf("enter no. of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1 || i==n){
        for(j=1;j<=n;j++){
            printf("* ");}}
         else{
        for(j=1;j<=n;j++){
            if(j==1 || j==n){ 
         printf("* ");}
         else{
            printf("  ");}}
             }
      printf("\n");  }
 return 0;}
