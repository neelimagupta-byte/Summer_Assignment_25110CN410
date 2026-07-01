#include<stdio.h>
#include<string.h>
typedef struct {
     int rollno;
     char name[50];
    char date[11];
     char address[50];
     char phone_no[11];  
 } student  ;
student c[100];
void add_record();
void display_record();
void search_record();
void update_record();
void delete_record();

int main(){
    int i,choice;
    printf("\n----------------------------------------------------------------------------------------\n");
    printf(" \n              STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("----------------------------------------------------------------------------------------\n");

    do{
        printf("\nenter your choice: \n");
        printf("1.Add new record.\n");
        printf("2.Update new record\n");
        printf("3.Display all student record\n");
        printf("4.Search student \n");
        printf("5.Delete a student record\n");
        printf("6.Exit\n");
        printf("enter a choice (1/2/3/4/5/6) : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: add_record();
                    break;
            case 2: update_record();
                    break;
            case 3: display_record();
                    break;
            case 4: search_record();
                    break;
            case 5: delete_record();
                    break;
            case 6: printf("exiting\n");
                    break;
            default : 
                    printf("INVALID INPUT \n\n");
                    }
    }
        while(choice!=6);
return 0; }

 int i,n,rno,f=0;
void add_record(){
printf("\n                 ________ADD RECORD________\n");   
printf("enter number of students : ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("student :%d \n",i+1);
    printf("\nenter roll number : ");
    scanf("%d",&c[i].rollno);
    printf("\nenter name : ");
    scanf(" %[^\n]s",c[i].name);
    printf("\nenter date of birth (DD/MM/YYYY) : ");
    scanf(" %[^\n]s",&c[i].date);
    printf("\nenter address : ");
    scanf(" %[^\n]s",&c[i].address);
    printf("\nenter phone number : ");
    scanf(" %s",&c[i].phone_no);}
}
void display_record(){
printf("\n                 ________DISPLAY RECORD________\n");  
printf("record of students: ");
if(n==0){
        printf("NO RECORDS!");
}
else{

for(i=0;i<n;i++){
    printf("\nroll number : %d",c[i].rollno);
    printf("\n name : %s",c[i].name);
    printf("\n date of birth (DD/MM/YYYY) : %s",c[i].date);
    printf("\n address : %s",c[i].address);
    printf("\n phone number :%s\n\n",c[i].phone_no);}
}}
void search_record(){
        printf("\n                 ________SEARCH RECORD________\n");  
        int choice,rno;
        char name[50];
         do{
                printf("choice:\n");
                printf("1. search by name: \n");
                printf("2.search by roll number : \n");
                printf("3.Exit\n");
                scanf("%d",&choice);

                switch(choice){
                case 1:
                        printf("enter the name : \n");
                        scanf(" %[^\n]s",&name);
                        for(i=0;i<n;i++){
                        if(strcmp(name,c[i].name)==0){
                                printf("\nroll number : %d",c[i].rollno);
                                printf("\nname : %s",c[i].name);
                                printf("\ndate of birth (DD/MM/YYYY) : %s",c[i].date);
                                printf("\naddress : %s",c[i].address);
                                printf("\nphone number :%s\n\n",c[i].phone_no);
                                f=1;
                                break;}}
                        if(f==0)
                        printf("no name found\n\n");
                        f=0;
                        break;
                case 2: 
                         printf("enter the roll number : \n");
                        scanf("%d",&rno);
                        for(i=0;i<n;i++){
                        if(rno==c[i].rollno){
                                printf("\nroll number : %d",c[i].rollno);
                                printf("\nname : %s",c[i].name);
                                printf("\ndate of birth (DD/MM/YYYY) : %s",c[i].date);
                                printf("\naddress : %s",c[i].address);
                                printf("\nphone number :%s\n\n",c[i].phone_no);
                                f=1;
                                break;}}
                        if(f==0)
                        printf("no roll number found\n\n");
                        f=0;
                        break;
                case 3: printf("exising \n");
                        break;
                default : 
                        printf("INVALID INPUT \n\n ");
                }
        }
         while(choice!=3);
}
void update_record(){
        printf("\n  --------------UPDATE RECORD--------------\n");  
        search_record();
        printf("enter roll number : ");
        scanf("%d",&rno);
        printf("enter details to update :\n");
        for(i=0;i<n;i++){
            if(rno==c[i].rollno){
                printf("\nenter name : ");
                scanf(" %[^\n]s",c[i].name);
                printf("\n enter date of birth (DD/MM/YYYY) : ");
                scanf(" %[^\n]s",&c[i].date);
                printf("\nenter address : ");
                scanf(" %[^\n]s",&c[i].address);
                printf("\nenter phone number : ");
                scanf(" %s",&c[i].phone_no);
                f=0;
                break;}
                if(f==0)
                        printf("no roll number found\n\n");
        f=1;
        break;}
        if(f==0)
        printf("no roll number found\n\n");
        f=0;
}

void delete_record(){
        printf("\n                 ________DELETE RECORD________\n");  
        printf("\nenter roll number to delete : ");
        scanf("%d",&rno);
        for(i=0;i<n;i++){
                if(c[i].rollno==rno){
                       int j=i;
                        while(j<n-1){
                        c[j]=c[j+1];
                j++;}
                printf("record deleted");
                        n--;}
        f=0;
        break;}
        if(f==0)
        printf("no roll number found\n\n");
        f=0;
}
