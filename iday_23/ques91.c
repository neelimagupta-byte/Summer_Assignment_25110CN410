// prg to check anagram string
#include<stdio.h>
int main(){
    int i=0,j=0,c=0,k,t;
    char str1[100],str2[100],ch;
    printf("enter first word : ");
    scanf("%s",&str1);
    printf("enter second word : ");
    scanf("%s",&str2);
    while(str1[i]!='\0'){
        i++;}
    while(str2[j]!='\0'){
       j++;}
    if(i==j){
        for(k=0;k<i;k++){
            for(t=0;t<j;t++){
                if(str1[k]==str2[t])
                c++;}}}
    if(c==j)
    printf("Yes, %s and %s are Anagram",str1,str2);
    else{printf("Not an Anagram");}
return  0;}