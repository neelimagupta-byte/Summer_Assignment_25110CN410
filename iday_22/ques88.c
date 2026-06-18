// prg to remove spaces from string 
#include<stdio.h>
int main(){
    int i=0,j;
    char str[100];
    printf("enter a sentence : ");
    scanf("%[^\n]s",&str);
    for(j=0;str[i]!='\0';j++){
        if(str[j]!=' '){
            str[i]=str[j];
            i++;}
    }
printf("String after spaces removed : %s",str);
return 0;}