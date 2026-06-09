// prg to count of even odd number 
#include<stdio.h>
int main(){
     int even=0,odd=0, n,i;
    printf("enter no. of terms : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    if (a[i]%2==0){
        even++;}
    else{odd++;}
    }
printf("count of even numbers : %d\n",even);
printf("count of odd numbers : %d",odd);
return 0;}

