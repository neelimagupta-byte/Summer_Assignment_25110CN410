// selection sort 
#include<stdio.h>
int main(){
    int n,i,j,s,c;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("\nsorted array : \n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if( a[i]>a[j]){
            c=a[i];
            a[i]=a[j];
        a[j]=c;}
        }}
        for(i=0;i<n;i++){
            printf("%d ",a[i]);}
return 0;}