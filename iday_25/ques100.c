//prg to sort word by length 
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j,n;
    char str[100][100],t[100];
    printf("enter no. of words : ");
    scanf("%d",&n);
    printf("enter words : \n");
    for(i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    printf("words sorted by length :\n");
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(strlen(str[i])>strlen(str[j])){
        strcpy(t,str[i]);
        strcpy(str[i],str[j]);
        strcpy(str[j],t);}}}
        for(i=0;i<n;i++){
            printf("%s ",str[i]);
        }
   return 0;} 
