/// program to print factor

#include<stdio.h>
int main(){
    int m,i,n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("factors of %d are : ",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}