// prg to compress string string
#include<stdio.h>
int main(){
    int i=0,j,k,t=0,count=0;
    char str[100],c[100];
    printf("enter a word : ");
    scanf("%[^\n]s",str);
    while(str[i]!='\0'){
    i++;}
    printf("\ncompressed string : ");
    for(j=0;j<i;j++){   
        for(k=0;k<i;k++){
            if(str[j]==str[k])
                break;}
        if(j!=k)
        continue;
        for(k=0;k<i;k++){
        if(str[j]==str[k])
        count++;}
        c[t]=str[j];
        c[t+1]=count + '0';
        count=0;
   t+=2;}
    c[t]='\0';
    printf("%s",c);
     return 0;   }