// prg to merge two sorted list 
#include<stdio.h>
int main(){
    int i=0,j=0,n1,n2,k=0;
    int a1[100],a2[100],merge[200];
    printf("enter no. of terms a1: ");
    scanf("%d",&n1);
    printf("enter sorted array1 : ");
    for(i=0;i<n1;i++){
    scanf("%d",&a1[i]);
    }
    printf("enter no. of terms a2 :");
    scanf("%d",&n2);
    printf("enter sorted array2 : ");
    for(i=0;i<n2;i++){
    scanf("%d",&a2[i]);
    }
    i=0;j=0;k=0;
        while(i<n1 && j<n2){
            if(a1[i]<a2[j]){
             merge[k]=a1[i];
            k++;
        i++;}
            else
            {merge[k]=a2[j];
            k++;
        j++;}
        } 
    while(i<n1){
        merge[k++]=a1[i++];
    }
    while(j<n2){
        merge[k++]=a2[j++];
    }
printf("Merged String : \n");
for(i=0;i<k;i++){
    printf("%d ",merge[i]);}
return 0;}
