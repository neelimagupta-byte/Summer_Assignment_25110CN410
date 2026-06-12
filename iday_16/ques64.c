// priogram to remove duplicates
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n],arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1+i;j<n;){
            if(a[j]==a[i]){
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
            n--;}
           else{
             j++;}}}
             printf("array after removing duplicates : " );
for(i=0;i<n;i++)
    printf("%d ",a[i]);
 }
        