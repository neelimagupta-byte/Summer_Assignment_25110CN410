//number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i=0,num,guess,j=2;
    char hint,end;
    printf("\n     **--------------**  WELCOME TO THE NUMBER GUESSING GAME  **--------------**");
    srand(time(0));
    num=rand() %500 +1;
    printf("\nHello \n\nI  have chosen a number between 1 and 500.\n");
    printf("Your mission- guess the number correctly within 4 chances!\n\nLet's begin...\n");

    for(i=0;i<=4;i++){
        if(i==0){
            printf("\n Enter your first guess: ");
            scanf("%d",&guess);
            if(guess!=num){
                printf("\n Wrong guess! Keep going");}
        }
        if(i==3){
            printf("\n Need a hint? (Y/N): ");
            scanf(" %c",&hint);
            if(hint=='Y'|| hint=='y'){
            printf("\nHint : the number is divisible by ");
                while(j<=9){
                if(num%j==0){
                    printf("%d ",j);}
                    j++;}}
        }
        if(i>0 && i<5){
            printf("\nDo you want to continue guessing? (Y/N): ");
            scanf(" %c",&end);  
            if(end=='N' || end=='n')
                break;
            else if(end=='y' || end=='Y'){
                printf("\nAlright, guess the number : ");
                scanf("%d",&guess);}
            if(i<5 && guess!=num){
                printf("\n incorrect! Try again");}
        }
        if(num==guess){
            printf("\n Bravo ! you nailed it ! ");
            break;
        }
        else if(guess>=num+100){
            printf("\nToo high!");
        }
        else if(guess<=num-100){
            printf("\nToo low!");
        }
        else if(guess >= num-50 && guess <= num+50 && !(guess >= num-10 && guess <= num+10)){
            printf("\n You're within 50 numbers! ");
        }
        
        else if(guess >= num-10 && guess <= num+10){
            printf("\n You're very close!");
        }

        else if(i==4 && num!=guess){
            printf("\n Game Over! All chances are gone.\nBetter luck next time!");
            printf("\ncorrect answer is %d",num);
        }
        if(num!=guess && i<4){
            printf("\n Chances left: %d\n", 3-i);}
    }
    return 0;}
