///program to print multiplication table of given no. 

#include<stdio.h>
int main(){
int n,i=1;
printf("enter a number: ");
scanf("%d",&n);
printf("multiplication of%d\n",n);
for(i;i<=10;1)
{   
    printf("%d*%d=%d\n",n,i,n*i);
    i++;
}
return(0);
}