#include<stdio.h>

float addition();
float subtraction();
float multiplication();
float division();
float power();

int main(){
   int i, choice;
   
    printf("\n              ***************** CALCULATOR ****************\n\n");
    do{
        printf("1.addition\n");
        printf("2.subtraction\n");
        printf("3.multiplication\n");
        printf("4.division\n");
        printf("5.power\n");
        printf("6.exit\n");
        printf("enter a choice :  ");
        scanf("%d",&choice);

        switch(choice){
            case 1: addition();
                    break;
            case 2: subtraction();
                    break;
            case 3: multiplication();
                    break;
            case 4: division();
                    break;
           case 5: power();
                    break;
            case 6: printf("\nexiting \n");
                    break;
            default :
                    printf("invalid input!\n\n");        
        }}
        while(choice!=6);
   }
float addition(){
    int n;
    float num,sum=0;
    printf("\nenter total number to add : ");
    scanf("%d",&n);
    printf("\nenter number : ");
    while(n>0){
        scanf("%f",&num);
        sum+=num;
        n--;}
    printf("\ntotal addition : %f\n\n",sum);
    return sum;
}

float subtraction(){
    int n;
    float num,diff;
    printf("\nenter total number to subtract: ");
    scanf("%d",&n);
    printf("\nenter numbers : ");
    scanf("%f",&diff);
    while(n-1>0){
        scanf("%f",&num);
        diff-=num;
        n--;}
    printf("\ntotal subtraction : %f\n\n",diff);
    return diff;
}
float multiplication(){
    int n;
    float num,multiply=1;
    printf("\nenter total number to multiply : ");
    scanf("%d",&n);
    printf("\nenter numbers : ");
    while(n>0){
        scanf("%f",&num);
        multiply*=num;
        n--;}
    printf("\ntotal multiplication : %f\n\n",multiply);
    return multiply;
}
float division(){
    float n,m;
    float div;
    printf("\nenter dividend : ");
    scanf("%f",&n);
    if(n==0)
    printf("\nnot defined \n\n");
    else{
    printf("\nenter divisor : ");
    scanf("%f",&m);
        div=n/m;
    printf("\ndivision : %f\n\n",div);
    return div;}
}
float power(){
    int p,pwr;
    float n,m;
    printf("\nenter the number : ");
    scanf("%f",&n);
    m=n;
    printf("\nenter the power : ");
    scanf("%d",&p);
    pwr=p;
    while(p-1>0){
        n*=m;
        p--;
    }
    printf("\n %f raised to the power %d : %f\n\n",m,pwr,n);
    return n;
}
   
