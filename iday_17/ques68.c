#include<stdio.h>
int main(){
    int c=0,s=0,i,j,n,k;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n],arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        arr[i]=a[i];
    }
    printf("\nCOMMON ELEMENTS : \n");
for(i=0;i<n;i++){
    c=1;
    for(j=0;j<n;j++){
        if(a[i]==a[j])
            break;}
    if(j!=i)
    continue;
    for(j=i+1;j<n;j++){
        if(a[i]==a[j])
            c++;}
         if(c>1){
         printf("%d ",a[i]);
        }}
return 0;}
        