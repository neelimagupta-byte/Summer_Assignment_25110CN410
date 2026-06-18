// prg to number of word
#include<stdio.h>
int main(){
    int i=0,c=0;
    char str[100];
    printf("enter a sentence : ");
    scanf("%[^\n]s",&str);
    while(str[i]!='\0'){ 
    if(str[i]==' ' && str[i+1]!=' '){
        c++;}
    i++; }
    if(str[0]==' ')
    c--;
        printf("number of word : %d",c+1);
  return 0;  } 