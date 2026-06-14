// bubble sort
#include<stdio.h>
int main(){
    int n,i,j,c;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
    if(a[j]>a[j+1]){
        c=a[j];
        a[j]=a[j+1];
        a[j+1]=c;
    }}}
    printf("\nsorted array :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;}