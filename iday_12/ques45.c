//function for palindrome
#include<stdio.h>
int palindrome(int n){
    #include<math.h>
    int m,t,rev=0;
    m=n;
    while(m>0){
        t=m%10;
        rev=rev*10+t;
        m/=10;}
        if(rev==n){
            printf("%d is a palindrome.",n);
        }
        else{printf("%d is not a palindrome.",n);}
    }
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n); 
    palindrome(n);
}