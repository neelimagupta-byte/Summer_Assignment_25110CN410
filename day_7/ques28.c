///program to recursive reverse number

#include<stdio.h>
int reverse_num(int n){
    int t,count=0;
    if(n<10){
       return n; }
    else{
        t=n;
        int p=1;
        while(t>0){
            count++;
            t/=10; }
        while(count>1){
            p*=10;
            count--; }
         return reverse_num(n/10)+(n%10)*p; }}
int main(){
   int n;
    printf("enter a number to reverse : ");
    scanf("%d",&n);
printf("%d",reverse_num(n));
return 0;}
