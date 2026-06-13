// intersection of array
#include<stdio.h>
int main(){
int n1,n2,i,j,k;
printf("enter no. of terms a1 : ");
scanf("%d",&n1);
int a1[n1],arr[50];
  for(i=0;i<n1;i++){
    scanf("%d",&a1[i]);
     }
printf("enter no. of terms a2 : ");
scanf("%d",&n2);
int a2[n2];
    for(i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
printf("\nintersection of arrays :\n");
for(i=0;i<n1;i++){
    for(j=0;j<n1;j++){
        if(a1[i]==a1[j])
        break;}
    if(j!=i)
    continue;
    arr[i]=a1[i];
    for(j=0;j<n2;j++){
    for(k=0;k<n2;k++){ 
        if(a2[j]==a2[k] )
            break;}
    if(j!=k)
    continue;
        if(arr[i]==a2[j])
        printf("%d ",arr[i]);}
    }
return 0;} 
