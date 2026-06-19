// PRG TO FIND FIRST REPEATING CHARACTER
#include<stdio.h>
int main(){
    int i=0,j,k,count=0;
    char str[100];
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
while(str[i]!='\0'){
    i++;}
for(j=0;j<i;j++){
    for(k=0;k<i;k++){
        if(str[j]==str[k])
        break;}
    if(j!=k)
    continue;
    for(k=j+1;k<i;k++){
        if(str[j]==str[k]){
        printf("First repeating character : %c",str[j]);
    count++;
break;}}
if(count==1)
break;}
return 0;}
