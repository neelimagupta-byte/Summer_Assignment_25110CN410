// prg to find character frequency
#include<stdio.h>
int main(){
    int i=0,count=0;
    char str[100],c;
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
    printf("enter character : ");
    scanf(" %c", &c);
    while(str[i]!='\0'){
    if(str[i]==c){
        count++;}
    i++;}
    printf("%d",count);
return 0; }