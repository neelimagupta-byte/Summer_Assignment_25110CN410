// prg for string rotation 
#include<stdio.h>
int main(){
    int i=0,j=0,p,k;
    char str[100],c,m[100];
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
    printf("position to rotate : ");
    scanf("%d",&p);
    while(str[i]!='\0'){
    m[i]=str[i]; 
    i++;}
    for(j=0;j<p;j++){
        c=m[j];
    for(k=0;k<i-1;k++){
       str[k]=str[k+1];}
    str[i-1]=c;}
    printf("rotated string : %s",str);
return 0;}