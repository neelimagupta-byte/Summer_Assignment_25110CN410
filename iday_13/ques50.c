//
#include<stdio.h>
int main(){
    int i,n;
    float add=0;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for (i=1;i<=n;i++){
        scanf("%d",&a[i]);
        add+=a[i];}
printf("sum of array: %.2f\n",add);
printf("average of array: %.2f",add/2);
return 0;}