///program to find largest prime factor

#include<stdio.h>
int main(){
    int i,s=0,sum=0,j,n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            sum=0;
            for(j=2;j<=n;j++){
            if(i%j==0 && i!=j){
                sum+=1;}}
            if(sum==0){
               if( s<=i){
               s=i;}
            } 
        }}
        printf("%d is largest prime factor ",s); 
return 0;}