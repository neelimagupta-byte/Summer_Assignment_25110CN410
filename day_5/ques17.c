/// program to check perfect number 

#include<stdio.h>
#include<math.h>
int main(){
    int pft=1,prime=1,n,f=0,i; 
    printf("enter a number : ");
    scanf("%d",&n);
    while(pft<n){
        
        for(i=2;i<=n;i++){
        if(prime%i==0 && prime==i){
            pft=pow(2,prime-1)*(pow(2,prime)-1);
        }
        if(n==pft){
            printf("%d is a perfect number.",n);
            f=1;
            break;}
     } 
     if(f==1){
        break;
     }
    prime++;}
    if(f==0){
        printf("not a perfect number.");
    } 
}