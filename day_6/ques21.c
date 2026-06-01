/// decimal to binary

#include<stdio.h>
#include<math.h>
int main(){
    int n,m,i=0,a[100];
    printf("enter a decimal number : ");
    scanf("%d",&n);
    while(n>0){
        a[i]=n%2;
        n/=2;
    i++;}
    printf("binary =");
    for(i=i-1;i>=0;i--){
        printf(" %d",a[i]);
    }

return 0 ;}