//check skew symmetric
#include<stdio.h>
int main(){
    int count=0,n,i,j,r,c,trans[50][50];
    printf("enter no. of rows and columns : ");
    scanf("%d%d",&r,&c);
    int m[r][c];
    if (c==r){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]);}}
    for(i=0;i<c;i++){
          for(j=0;j<r;j++){
            trans[i][j]=m[j][i];}}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(trans[i][j]==m[i][j])
        { count++;}}
}
if(count==r*c)
    printf("Skew Symmetric");
else{ printf("Not Skew Symmetric.");}
}
else{
    printf("Enter a Square Matrix");
}
return 0;}
