//  program to move zeros to the end
#include<stdio.h>
int main(){
   int count=0,n,i,j=0;
   printf("enter no. of terms : ");
   scanf("%d",&n);
   int a[n],arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
     arr[i]=a[i];
    }
for(i=0;i<n;i++)
{
    if(arr[i]!=0){
        a[j]=a[i];
        printf("%d ",a[j]);
        j++;}
    }
while(j<n){
    a[j]=0;
    printf("%d ",a[j]);
    j++;
}
return 0;}