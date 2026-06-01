/// program to check stong number

#include<stdio.h>
int main(){
    int n,num,fac=1,st=0,temp;
    printf("enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        n=temp%10;
        fac=1;
    while(n>0){
        fac*=n;
        n--;}
      st+=fac;
      temp/=10;}
      if (num==st){
        printf("%d is a strong number ",st);
      }
      else{
        printf("not a strong number.");
      }
    return 0 ;}