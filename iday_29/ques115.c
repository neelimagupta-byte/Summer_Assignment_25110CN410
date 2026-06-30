#include<stdio.h>
#include<string.h>
#include<ctype.h>
void string_Length(char str[]) {
    printf("Length: %d\n", (int)strlen(str));
}

void string_Copy(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

void string_Concat(char str[]) {
    char str2[100];
    printf("Enter another string: ");
    scanf("%s", str2);
    strcat(str, str2);
    printf("Concatenated string: %s\n", str);
}

void string_Reverse(char str[]) {
    int len =strlen(str);
    printf("Reversed string: ");
    for(int i = len-1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void uppercase(char str[]) {
    for(int i = 0;str[i]!='\0';i++) {
        str[i] = toupper(str[i]);   
    }
    printf("Uppercase string: %s\n", str);
}

void lowercase(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);  
    }
    printf("Lowercase string: %s\n", str);
}

int main(){
   int i, choice;
   
    printf("\n              ***************** STRING OPERATION ****************\n\n");

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    do{
        printf("\n1.STRING LENGTH\n");
        printf("2.STRING COPY \n");
        printf("3.STRING CONCAT \n");
        printf("4.STRING REVERSE\n");
        printf("5.STRING TO UPPER CASE \n");
        printf("6.STRING TO LOWER CASE\n");
        printf("7.EXIT\n");
        printf("enter a choice :  ");
        scanf("%d",&choice);

        switch(choice){
            case 1: string_Length(str);
                    break;
            case 2: string_Copy( str);
                    break;
            case 3: string_Concat(str);
                    break;
            case 4: string_Reverse(str);
                    break;
           case 5:  uppercase(str);
                    break;
           case 6:  lowercase(str);
                    break;        
            case 7: printf("\nexiting \n");
                    break;
            default :
                    printf("invalid input!\n\n");        
        }}
        while(choice!=7);
  return 0; }

