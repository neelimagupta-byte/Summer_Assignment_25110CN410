//prg to check palindrome string
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j;
    char str[100],c,rev[100];
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
    while(str[i]!='\0'){ 
    rev[i]=str[i];
    i++;}
    rev[i]='\0';
    for(j=0;j<i;j++){
        c=rev[j];
        rev[j]=rev[i-1];
        rev[i-1]=c;
        i--;}
if(strcmp(rev,str)==0)
    printf("palindrome ");
else{printf("not a palindrome");}
return 0;}