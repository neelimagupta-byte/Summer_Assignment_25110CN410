// prg to find maximum frequency of a element 
#include<stdio.h>
int main(){
    int max,count=0,i,s=0,n,j;
    printf("\nenter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++){
    if (a[i]==a[j]){
      break;}}
    if(j!=i)
    continue;
    for(j=0;j<n;j++){
      if(a[j]==a[i]){
        count++;}}
      if(s<count){
      s=count;
      max=a[i];
      count=0;}
  }
printf("\nmaximum frequency element : %d ",max);
  return 0;  }
  
