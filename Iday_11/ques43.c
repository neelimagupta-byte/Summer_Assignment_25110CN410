// function to check prime number
#include<stdio.h>
void prime_num(int n){
    int i,sum=0;
    for(i=2;i<n;i++){
    if(n%i==0 ){
        sum+=1;}}
        if(sum==0){
        printf("%d is a  prime number.",n);}
        else{
            printf("%d is not a prime nuber.",n);}
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    prime_num(n);
}