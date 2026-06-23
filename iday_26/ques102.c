// voter eligibility system

#include<stdio.h>
int yes_no(char a){
    if(a!='y' && a!='n'){
        printf("\nenter only y/n");
        return 404;}
    else 
    {return 0;}
    }
int main(){
    int  age;
    char name[40],res,dis,ind;
    printf("\n    VOTING ELIGIBILITY SYSTEM\n\n");
    printf("Enter Name : ");
    scanf("%s",&name);
    printf("\nEnter Age : ");
    scanf("%d",&age);
    printf("\nAre you INDIAN ? (y/n): ");
    scanf(" %c",&ind);
    while(yes_no(ind)!=0){
     printf("\nAre you INDIAN ? (y/n): ");
    scanf(" %c",&ind);    
    }
    printf("\nare you a resident of your constituency? (y/n): ");
    scanf(" %c",&res);
    while(yes_no(res)!=0){
    printf("\nare you a resident of your constituency? (y/n): ");
    scanf(" %c",&res);
    }
    printf("\nare you legally disqualified : (y/n) : ");
    scanf(" %c",&dis);
    while(yes_no(dis)!=0){
    printf("\nare you legally disqualified : (y/n) : ");
    scanf(" %c",&dis);
    }
    if(age>=18 && res=='y' && dis=='n' && ind=='y')
    printf("\nYou are eligible to vote!");
    else{
        printf("Not eligible!");
    }
return 0;}
