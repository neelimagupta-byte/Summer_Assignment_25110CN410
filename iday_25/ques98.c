// prg to find common element
#include<stdio.h>
int main(){
    int i=0,n,j,c=0;
    char str[100];
    printf("enter a string : ");
    scanf("%[^\n]",str);
    while(str[n]!='\0'){
        n++;}
    printf("common elements : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(str[i]==str[j])
        break; }
        if(j!=i)
        continue;
        for(j=0;j<n;j++){
            if(str[i]==str[j])
            c++;} 
            if(c>1)
            printf("%c ",str[i]);
            c=0;}
    return 0; }
