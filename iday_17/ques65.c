// merge array
#include<stdio.h>
int main(){
    int n,m,i;
    int a1[50],a2[50];
    printf("enter no. of terms in array_1: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter no. of terms in array_2: ");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a2[i]);
    }
    for(i=0;i<m;i++){
            a1[n]=a2[i];
            n++;
        }
        printf("Merged arrays : \n");
   for(i=0;i<n;i++){
      printf("%d ",a1[i]);}
    
    return 0;}
