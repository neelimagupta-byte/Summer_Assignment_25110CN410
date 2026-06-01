#include<stdio.h>
#include<math.h>
int main(){
int n,i,pwr=0,dec=0,m;
printf("enter binary number : ");
scanf("%d",&n);
m=n;
while(n>0){
    pwr++;
    n/=10;
}
for(i=0;i<pwr;i++){
    dec+=(m%10)*pow(2,i);
    m/=10;
}
printf(" decimal= %d ",dec);
}