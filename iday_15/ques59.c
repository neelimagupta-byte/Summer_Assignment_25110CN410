//  program to rotate array right
#include<stdio.h>
int main(){
    int s,c=0,n,i,j;
    printf("enter no. of terms: ");
    scanf("%d",&n);
    int a[n],arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        arr[i]=a[i];;
    }
printf("enter position to shift : ");
scanf("%d",&s);
for(i=n-1;i>n-1-s;i--){
    c=arr[i];
    for(j=n-1;j>0;j--){
        a[j]=a[j-1];}
a[0]=c;
    }
for(i=0;i<n;i++)
    printf("%d ",a[i]);
}