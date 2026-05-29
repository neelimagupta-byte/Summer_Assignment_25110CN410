/// program to range of prime number
#include <stdio.h>
int main(){
    int n,num,j,sum=0;
    printf("enter A number: ");
    scanf("%d",&n);
    printf("prime number btw 1 to %d : ",n);
    for(num=1;num<=n;num++){
        sum=0;
        for(j=2;j<9;j++){
            if (num%j==0 & num!=j){
                sum+=1;
                    } 
                 }
    if(sum==0){
        printf("%d ",num);}
    }
    return 0;
}