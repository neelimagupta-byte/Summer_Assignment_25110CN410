//union of array
#include<stdio.h>
int main(){
    int n1,n2,i,j,k;
    printf("enter no of terms in a1: ");
    scanf("%d",&n1);
    int a1[n1],arr[50];
     for(i=0;i<n1;i++){
        scanf("%d",&a1[i]);
        arr[i]=a1[i];
    }
    printf("enter no. of terms in a2: ");
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
for(i=0;i<n2;i++)
{ arr[n1]=a2[i];
    n1++;}
for(i=0;i<n1;i++){
     for(j=i+1;j<n1;){
            if(arr[j]==arr[i]){
            for(k=j;k<n1-1;k++){
                arr[k]=arr[k+1];}
           n1--;}
        else 
        j++;}}
printf("\n UNION ARRAY : \n");
    for(j=0;j<n1;j++)
    printf("%d ",arr[j]);
  return 0;  }
 