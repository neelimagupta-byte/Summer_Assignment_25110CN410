/// program  to check armstrong number

#include<stdio.h>
#include <math.h>
int main(){
    int amstg=0,t,count=0,m,n;
    printf("enter a number : ");
    scanf("%d",&n);
    m=n;
    while(m!=0){
        count++;
        m/=10;
    }
    m=n;
    while(m>0){
        t=m%10;
        amstg=amstg+pow(t,count);
        m/=10;
    }
    if(n==amstg){
        printf("%d is armstrong.",n);
    }
    else{ printf("%d is not armstrong.",n);}
return 0;
}