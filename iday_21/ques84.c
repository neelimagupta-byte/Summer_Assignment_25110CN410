// prg to convert lowercase to uppercase
#include<stdio.h>
int main(){
    int i=0,c=65,t=97,j;
    char str[100];
    printf("enter a word : ");
    scanf("%[^\n]s",&str); 
    while(str[i]!='\0'){
    i++; 
}
    for(j=0;j<i;j++){
        while(c<=90 && t<=122){
             char caps=c,small=t;
            if(str[j]==small){
            str[j]=caps;}
        c++;
        t++;}
    c=65; t=97;}
    printf("In uppercase : %s ",str);
return 0;}