// prg to input and display
#include<stdio.h>
int main(){
    int a[20] ,i,n;
    printf("enter no. of terms : ");
    scanf("%d",&n);

    printf("input: ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("output : ");
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
return 0;}