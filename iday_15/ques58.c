// program to rotate array left
#include<stdio.h>
int main(){
    int c=0,i,j,n,s;
printf("enter no. of terms: ");
scanf("%d",&n);
int a[n],arr[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    arr[i]=a[i];
}
printf("enter position to shift ");
scanf("%d",&s);
for(i=0;i<s;i++){
    c=arr[i];
    for(j=0;j<n-1;j++){
    a[j]=a[j+1];}
    a[n-1]=c;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;}