// prg to find non repeating characters
#include<stdio.h>
int main(){
    int i=0,j,k,c=0;
    char str[100];
    printf("enter a string : ");
    scanf("%[^\n]s",str);
    while(str[i]!='\0'){
        i++; }
    for(j=0;j<i;j++){
        for(k=0;k<i;k++){
        if(str[j]==str[k])
        break;}
    if(j!=k)
    continue;
    for(k=j+1;k<i;k++){
        if(str[j]==str[k])
        c++;}
if(c==0){
printf("First non-repeating character : %c",str[j]);
  break;} 
c=0; }
return  0;}