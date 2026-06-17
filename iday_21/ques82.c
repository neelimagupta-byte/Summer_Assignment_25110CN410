// prg to reverse a string 
#include<stdio.h>
int main(){
    char str[100],t;
    int i=0,j;
    printf("enter  string : ");
    scanf("%[^\n]s",str);
    while(str[i]!='\0'){
        i++; }
    for(j=0;j<i;j++){
        t=str[j];
        str[j]=str[i-1];
        str[i-1]=t;
        i--;
    }
    printf("reversed string : %s",str);
return 0;}