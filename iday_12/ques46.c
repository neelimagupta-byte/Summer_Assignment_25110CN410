// function for armstrong
#include<stdio.h>
int armstrong(int n){
    #include<math.h>
    int a=1,i,t=0,cnt=0,m;
    m=n;
    while(m>0){
        cnt++;
        m/=10;}
    m=n;
    while(m>0){
        for(i=1;i<=cnt;i++){
        a*=m%10;}
        t+=a;
        a=1;
        m/=10;}
    if(n==t){
        printf("%d is an armstrong number.",n);}
    else{
    (printf("%d is not an armstrong number.",n));
    }
    }
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    armstrong(n);
}
