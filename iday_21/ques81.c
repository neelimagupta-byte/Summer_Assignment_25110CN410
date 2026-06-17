// prg to find string length without strlen()
#include<stdio.h>
int main(){
 char c[50];
 printf("enter a string : ");
 scanf("%[^\n]s",c);
 int i=0;
 while(c[i]!='\0'){
    i++;}
printf("string length : %d",i);
return 0;}