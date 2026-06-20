// prg to remove duplicate character
#include<stdio.h>
int main(){
    int i=0,j,k,t;
    char str[100],temp[100],a;
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
while(str[i]!='\0'){ 
    i++;  }
   for(j=0;j<i;j++){
    for(k=j+1;k<i;){
        if(str[j]==str[k]){
        for(t=k;t<i-1;t++){
            str[t]=str[t+1];}
        i--;
    str[i]='\0';}
        else{k++;}}}
printf("string after removing duplicate character : %s",str);
return 0;}