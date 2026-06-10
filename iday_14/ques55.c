// prg to find second largest element
#include<stdio.h>
int main(){
    int n,j=0,l,s,i;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n],arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    l=s=a[0];
    for(i=0;i<n;i++){
    if (l<=a[i]){
        s=l;
        l=a[i];}
    else if(s<a[i] && a[i]!=l){
        s=a[i];}}
    printf("second largest element : %d .",s);
return 0;}
