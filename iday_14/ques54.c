// prg to find frequency of an element
#include<stdio.h>
int main(){
    int count=0,s,n,i;
    printf("enter no. of terms: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
printf("enter an elment ");
scanf("%d",&s);
for(i=0;i<n;i++){
    if(s==a[i]){
        count++;
    }}
printf("\nfrequency of %d is %d",s,count);
return 0;}