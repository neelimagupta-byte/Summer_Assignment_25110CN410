/// program to print armstrong number in range

#include<stdio.h>
#include<math.h>
int main(){
    int amstg=0,n,t,i,count=0;
printf("enter  the range : ");
scanf("%d",&n);
printf("range of armstrong btween 1 to %d are: \n",n);
for(i=1;i<n;i++){
        t=i;
        amstg=0;
        count=0;
while(t!=0){
    count++;
    t/=10;
}
t=i;
while(t!=0){
    amstg+=pow(t%10,count);
    t/=10;
}
if(i==amstg){
    printf("%d ",amstg);
}               }
return 0;
}
