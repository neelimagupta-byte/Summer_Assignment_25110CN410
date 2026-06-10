// prg to find duplicates in array
#include<stdio.h>
int main(){
    int i,n,j,count=0;
        printf("enter no. of terms : ");
        scanf("%d",&n);
        int a[n],arr[n];
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
   
for (i=0;i<n;i++){
 count=1;
for(j=0;j<n;j++){
    if(a[i]==a[j])
    break;}
if(j!=i){
    continue;
}
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
    count++;}
}
if(count>1 ){
     printf("%d occurs %d times\n",a[i],count);   
    }
}
return 0;}
    