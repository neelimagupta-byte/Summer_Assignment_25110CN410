// prg to find longest word
#include<stdio.h>
int main(){
    int i=0,len=0,max=0,start;
    char str[1000],s[100]; 
    printf("enter a sentence : ");
    scanf("%[^\n]s",&str);
    int end=0,store=0;
    while(str[i]!='\0'){
        store=i;
        while(str[store]!=' '){
            if(str[store]=='\0')
             break;
            max++;
            store++;
        }
        if(len<max){
            len=max;
            end=store;}
        max=0;
        i=store;
    if(str[i]==' ')
    i++;}
    start=end-len;
    printf("longest word : \n");
    for(start;start<end;start++){
        printf("%c",str[start]);}
  return 0;  }
       