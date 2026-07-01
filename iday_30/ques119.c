#include<stdio.h>
#include<string.h>
typedef struct employee{
     int emp_id;
     char name[50];
    char date[11];
     char address[50];
     char contact[10];  
 } emp ;
emp e[100];
void add_employee();
void display_employee();
void search_employee();
void update_employee();
void delete_employee();

int main(){
    int i,choice;
    printf("\n_________________________________________________________________________________\n");
    printf("|                     EMPLOYEE MANAGEMENT SYSTEM                                 |\n");
    printf("----------------------------------------------------------------------------------\n");


    do{
        printf("\nenter your choice: \n");
        printf("1.Add new employee.\n");
        printf("2.Update employee \n");
        printf("3.Display all employees detail\n");
        printf("4.Search an employee\n");
        printf("5.Delete an employee\n");
        printf("6.Exit\n");
        printf("enter a choice (1/2/3/4/5/6) : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: add_employee();
                    break;
            case 2: update_employee();
                    break;
            case 3: display_employee();
                    break;
            case 4: search_employee();
                    break;
            case 5: delete_employee();
                    break;
            case 6: printf("exiting\n");
                    break;
            default : 
                    printf("INVALID INPUT \n\n");
                    }
    }
        while(choice!=6);
return 0; }

 int i,n,empid,f=0;
void add_employee(){
printf("\n                 ________ADD EMPLOYEE________\n");   
printf("\nenter number of employees : ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf(" employee :%d \n",i+1);
    printf("\nenter employee id : ");
    scanf("%d",&e[i].emp_id);
    printf("\nenter name : ");
    scanf(" %[^\n]s",e[i].name);
    printf("\nenter date of birth (DD/MM/YYYY) : ");
    scanf(" %[^\n]s",&e[i].date);
    printf("\nenter address : ");
    scanf(" %[^\n]s",&e[i].address);
    printf("\nenter phone number : ");
    scanf(" %s",&e[i].contact);}
}
void display_employee(){
printf("\n                 ________DISPLAY EMPLOYEE________\n");  
if(n==0){
    printf("NO RECORDS!\n");
}
printf("Details of employee : ");
for(i=0;i<n;i++){
    printf("\n employee id : %d",e[i].emp_id);
    printf("\n name : %s",e[i].name);
    printf("\n date of birth (DD/MM/YYYY) : %s",e[i].date);
    printf("\n address : %s",e[i].address);
    printf("\n phone number :%s\n\n",e[i].contact);}
}
void search_employee(){
        printf("\n                 ________SEARCH EMPLOYEE________\n");  
        int choice,empid;
        char name[50];
         do{
                printf("choice:\n");
                printf("1. search by name \n");
                printf("2.search by employee id  \n");
                printf("3.Exit\n");
                printf("\nenter choice : ");
                scanf("%d",&choice);

                switch(choice){
                case 1:
                        printf("enter the name : ");
                        scanf(" %[^\n]s",&name);
                        for(i=0;i<n;i++){
                        if(strcmp(name,e[i].name)==0){
                                printf("\nemployee id : %d",e[i].emp_id);
                                printf("\nname : %s",e[i].name);
                                printf("\ndate of birth (DD/MM/YYYY) : %s",e[i].date);
                                printf("\naddress : %s",e[i].address);
                                printf("\nphone number :%s\n\n",e[i].contact);
                                f=1;
                                break;}}
                        if(f==0)
                        printf("no name found\n\n");
                        f=0;
                        break;
                case 2: 
                         printf("enter the employee id : ");
                        scanf("%d",&empid);
                        for(i=0;i<n;i++){
                        if(empid==e[i].emp_id){
                                printf("\nemployee id : %d",e[i].emp_id);
                                printf("\nname : %s",e[i].name);
                                printf("\ndate of birth (DD/MM/YYYY) : %s",e[i].date);
                                printf("\naddress : %s",e[i].address);
                                printf("\nphone number :%s\n\n",e[i].contact);
                                f=1;
                                break;}}
                        if(f==0)
                        printf("no employee id found\n\n");
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
void update_employee(){
        printf("\n                 ________UPDATE employee________\n");  
        printf("enter employee id : ");
        scanf("%d",&empid);
        for(i=0;i<n;i++){
            if(empid==e[i].emp_id){
                printf("\nenter name : ");
                scanf(" %[^\n]s",e[i].name);
                printf("\n enter date of birth (DD/MM/YYYY) : ");
                scanf(" %[^\n]s",&e[i].date);
                printf("\nenter address : ");
                scanf(" %[^\n]s",&e[i].address);
                printf("\nenter phone number : ");
                scanf(" %s",&e[i].contact);
                f=0;
                break;}
                if(f==0)
                        printf("no employee id found\n\n");
        f=1;
        break;}
        if(f==0)
        printf("no employee id found\n\n");
        f=0;
}

void delete_employee(){
        printf("\n                 ________DELETE employee________\n");  
        printf("\nenter employee id to delete : ");
        scanf("%d",&empid);
        for(i=0;i<n;i++){
                if(e[i].emp_id==empid){
                       int j=i;
                        while(j<n-1){
                        e[j]=e[j+1];
                j++;}
                printf("employee deleted");
                        n--;}
        f=0;
        break;}
        if(f==0)
        printf("no employee id found\n\n");
        f=0;
}
