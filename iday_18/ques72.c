// program to sort in descending order 
#include<stdio.h>
int main(){
    int s,n,i,j;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                s=a[i];
                a[i]=a[j];
                a[j]=s;}
            }}
printf("descending order : ");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;}