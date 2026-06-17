//prg to count no. of vowels and consonants
#include<stdio.h>
int main(){
    char str[50];
    int i=0,j,c=65,t=97,vowels=0,cons=0;
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
    while(str[i]!='\0'){
        i++;   }
     for(j=0;j<i;j++){
        while(c<=90 && t<=122){
     char caps=c,small=t;
        if(str[j]==caps || str[j]==small){
            if(str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='a'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U'){
            vowels++;}
            else{cons++;}}
        c++;
        t++;}
    c=65;
    t=97;}
printf("no. of vowels : %d\nno. of consonants :%d",vowels,cons);
       return 0;}