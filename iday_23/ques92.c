// prg to printf maximum occuring character
#include<stdio.h>
int main(){
    int i=0,j,s=0,c=0,k;
    char str[100],store;
    printf("enter a string : ");
    scanf("%[^\n]s",&str);
    while(str[i]!='\0'){
        i++; 
    }
    for(j=0;j<i;j++){
        for(k=0;k<i;k++){
        if(str[j]==str[k])
        break; }
        if(j!=k)
        continue;
        for(k=0;k<i;k++){
        if(str[j]==str[k])
        c++;
        if(s<c){
            store=j;
            s=c;}}
    c=0;}
    printf("\nMaximum occurring character (%d times) : %c",s,str[store]);
return 0;}