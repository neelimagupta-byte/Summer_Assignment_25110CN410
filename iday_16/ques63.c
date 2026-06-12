// prg to find pair with given sum
#include<stdio.h>
int main(){
int s,n,j,i,sum;
printf("enter no. of element: ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter a sum ");
scanf("%d",&sum);
printf("pairs:\n");
for(i=0;i<6;i++){
    for(j=i;j<6;j++){
        if(s==a[j])
        continue;
   if(a[i]+a[j]==sum && a[i]!=a[j]){
   printf("%d+%d\n",a[i],a[j]);
s=a[j];}
}}}