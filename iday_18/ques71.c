// BINARY SEARCH
#include<stdio.h>
int main(){
    int mid,n,i,l=0,h,k,f=0;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        printf("enter search key ");
        scanf("%d",&k);
        h=n-1;
for(i=l;i<=h;i++){
    mid=(l+h)/2; 
    if(k==a[mid]){
        printf("\n found! at %d",mid+1);
        f++;
        break;}
    else if(k<a[mid]){
        h=mid-1;
    }
    else if(k>a[mid]){
        l=mid+1;   
    }}
    if(f==0)
    printf("\nNot Found!");
return 0;}