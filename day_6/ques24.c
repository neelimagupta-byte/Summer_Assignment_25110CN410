#include<stdio.h>
int main(){
    int m=1,p,pwr,n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("power : ");
    scanf("%d",&pwr);
    p=pwr;
    while(pwr>0){
        m*=n;
        pwr--;
    }
    printf("%d^%d=%d",n,p,m);
}