// program to linear search
#include<stdio.h>
int main(){
    int f=0,n,s,i;
    printf("enter no. of terms: ");
    scanf("%d",&n);    
   int a[n];
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
printf("enter element to search : ");
scanf("%d",&s);
for(i=0;i<n;i++){
    if(s==a[i]){
        printf("\n found! %d at position %d .",s,i+1);
        f+=1;
        break;}}
    if(f==0){
        printf("not found!");
    }
return 0;}