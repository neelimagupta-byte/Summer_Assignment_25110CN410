//// prg to check wheather a number is prime or not

#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=2;i<9;i++){
        if(n%i==0 & n!=i){
            s+=1;
            }
        }
        if( s==0 ){
                printf("%d is a prime number.",n);
            }
        else{printf("Not a prime number.");}
        }
    