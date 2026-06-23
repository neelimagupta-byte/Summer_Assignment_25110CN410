// prg for QUIZ APPLICATION
#include<stdio.h>
#include<string.h>

typedef struct quiz{
     char ques[100];  
    char options[4][100];
    char answer;
     char explanation[500];
    } quiz;
    quiz q[5];
    void check(char choice,int i);
    int score=0;
int main(){
    int i,j;
    char choice;
    printf("\n            ***********  WELCOME TO  *************** \n");
    printf("              ---------C PROGRAMMING QUIZ---------- ");
  
    strcpy(q[0].ques,"which of the following is the correct way to declare a pointer in C");
    strcpy(q[0].options[0]," int p;");
    strcpy(q[0].options[1]," int *p;");
    strcpy(q[0].options[2]," int &p;");
    strcpy(q[0].options[3]," pointer int p;");
    q[0].answer='B';
    strcpy(q[0].explanation,"In C, * is used to declare a pointer. int *p; means p is a pointer to an integer.");

    strcpy(q[1].ques,"Difference between ++i and i++");
    strcpy(q[1].options[0]," Both increment before use");
    strcpy(q[1].options[1]," Both increment after use ;");
    strcpy(q[1].options[2]," ++i increments before use, i++ after use ;");
    strcpy(q[1].options[3]," No difference ");
    q[1].answer='C';
    strcpy(q[1].explanation," ++i (pre-increment) increases the value before using it, while i++ (post-increment) uses the value first, then increments");
    
    strcpy(q[2].ques,"Difference between malloc() and calloc()");
    strcpy(q[2].options[0]," Both allocate memory and initialize to zero");
    strcpy(q[2].options[1]," malloc() allocates uninitialized memory, calloc() allocates and initializes to zero");
    strcpy(q[2].options[2]," malloc() is faster than calloc()");
    strcpy(q[2].options[3]," calloc() cannot allocate arrays ");
    q[2].answer='B';
    strcpy(q[2].explanation,"malloc() allocates memory without initialization, while calloc() allocates and sets all bytes to zero.");
    
    strcpy(q[3].ques,"What is a dangling pointer?");
    strcpy(q[3].options[0]," What is a dangling pointer? ");
    strcpy(q[3].options[1]," A pointer pointing to freed memory ");
    strcpy(q[3].options[2]," A pointer pointing to a valid variable");
    strcpy(q[3].options[3]," A pointer pointing to a constant ");
    q[3].answer='B';
    strcpy(q[3].explanation," A dangling pointer points to memory that has been freed. Accessing it causes undefined behavior.");

    strcpy(q[4].ques,"Difference between struct and union");
    strcpy(q[4].options[0]," Both store members in separate memory locations");
    strcpy(q[4].options[1]," struct shares memory, union does not");
    strcpy(q[4].options[2]," struct allocates separate memory for each member, union shares memory among members");
    strcpy(q[4].options[3]," No difference ");
    q[4].answer='C';
    strcpy(q[4].explanation,"In a struct, each member has its own memory. In a union, all members share the same memory space.");

        for(i=0;i<5;i++){
            printf("\nQ %d. %s\n",i+1,q[i].ques);
            printf("options :\n");
            for(j=0;j<4;j++){
                printf("%c %s\n",'A'+j,q[i].options[j]);}
            do{
            printf("\nSelect the correct options [A-D] : ");
            scanf(" %c",&choice);
            if(choice!='A'&& choice!='B'&& choice!='C'&& choice!='D'){ 
                printf("\nINVALID INPUT ! please try again");}
            }
            while (choice!='A'&& choice!='B'&& choice!='C'&& choice!='D');
            check(choice,i);
            } 
            printf("\nYour score is %d",score);
    return 0; }

    void check(char choice,int i){
          if(choice==q[i].answer){
                    printf("\nCorrect! :) ");
                    score++;}
                else{
                printf("\nIncorrect! :(");
                }
                printf("\nAnswer: %c",q[i].answer);
                printf("\nExplanation: %s\n",q[i].explanation);}
    

    
    