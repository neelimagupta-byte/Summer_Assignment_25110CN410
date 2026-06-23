//ATM simulation

#include<stdio.h>
void balance();
float withdraw();
float deposit();
int  main(){
    int choice,i;
    printf("\n                    ATM ");
    do{
        printf("\nChoices: \n");
        printf("1- CHECK BANK BALANCE \n");
        printf("2- DEPOSIT MONEY \n");
        printf("3- WITHDRAW MONEY\n");
        printf("4-EXIT\n\n");
        printf(" ENTER your choice (1/2/3/4) : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: balance();
                    break;
            case 2: deposit();
                    break;
            case 3: withdraw();
                    break;
            case 4: printf("\nTHANKYOU FOR VISITING ");
                    break;
            default:
                    printf("\nINVALID INPUT !");
                }
            }while(choice!=4); 
    return 0;}
   
float bal=0.0f;
float amt;
void balance(){
    printf("\nyour balance amount is : %.2f",bal);
return 0;}

float withdraw(){
    printf("\nenter amount : ");
    scanf("%f",&amt);
    if(amt<0){
        printf("INVALID AMOUNT! \n Please enter valid amount.");
    }
    else if(amt>bal){
        printf("\nInsufficient balance.");
        printf("\nyour current balance is : %.3f",bal);}
    
    else if(amt<bal){
        if(amt>20000){
            {printf("\nExceed the limit.\n");
            withdraw();} }}
    else{
        bal-=amt;
        printf("\n WITHDRAWL Successful");
    }
    return bal;}
float deposit(){
printf("\nEnter amount to deposit : ");
scanf("%f",&amt);
if(amt>0){
bal+=amt;
printf("\nDEPOSIT Successful.");}
else{
    printf("INVALID AMOUNT! \n Please enter valid amount");
}
return bal;
}