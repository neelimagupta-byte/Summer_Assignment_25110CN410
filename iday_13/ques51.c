// prg to find largest and samallest 
#include<stdio.h>
int main(){
     int l,sm,s,n=7,i;
     printf("enter no. of terms : ");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
    s=l=a[0];
    for(i=0;i<n;i++){
        if(l<=a[i]){
            l=a[i];}
        if(s>=a[i]){
            s=a[i];}}
        printf("large- %d \n small- %d",l,s);
    }
    
