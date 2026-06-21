// prg to sort alphabetically
#include<stdio.h>
#include<string.h>
int main(){
    int i,n,j;
    char name[100][100],t[100];
    printf("no. of term : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter name %d: ",i+1);
   scanf("%s",name[i]);
}
printf("Alphabetically sorted Names :\n");
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(strcmp(name[i],name[j])>0){
      strcpy(t,name[j]);
      strcpy(name[j],name[i]);
      strcpy(name[i],t);}}
    }
for(i=0;i<n;i++){
    printf("%s ",name[i]);
}
return 0;}