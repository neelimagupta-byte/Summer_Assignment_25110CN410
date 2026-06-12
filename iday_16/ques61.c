// prg to find missing numbers
#include<stdio.h>
int main(){
    int f=0,j,l,i,n;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
   l=a[0];
for(i=0;i<n;i++){
    if(l<=a[i]){
        l=a[i];}
}
printf("missing numbers in array btw 1 to %d :\n",l);
for(i=1;i<l;i++){
    for(j=0;j<n;j++){
    if(i==a[j]){
    f++;}}
    if(f==0){
    printf("%d ",i);}
f=0;
}
return 0;}
