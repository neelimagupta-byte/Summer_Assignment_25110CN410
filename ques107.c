#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct salary{
    int emp_id;
    char name[50];
    char department[20];
    char designation[20];
    int basic_salary;
    int allowance;
    int deduction;
    int net_salary;
}salary ;

int n=0;

void add_employee();
void generate_payslip();
void search_employee();
void update_salary();
void delete_employee();
int netsalary(int,int,int);

int main(){
   
    int choice;
    printf(" \n                  ***************** SALARY MANAGEMENT SYSTEM*******************\n\n");
    do{
        printf("\n Choice: \n");
        printf("1.Add new employee.\n");
        printf("2.Update salary  \n");
        printf("3.Generate payslip\n");
        printf("4.Search employee\n");
        printf("5.Delete an employee\n");
        printf("6.Exit\n");
        printf("enter a choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: add_employee();
                    break;
            case 2: update_salary();
                    break;
            case 3: generate_payslip();
                    break;
            case 4: search_employee();
                    break;
            case 5: delete_employee();
                    break;
            case 6: printf("Exiting.....\n");
                    break;
            default : 
                    printf("INVALID INPUT \n\n");
                    }
    }
        while(choice!=6);
return 0; }

void add_employee(){

FILE * ptr=fopen("salary.dat","ab");
if(ptr==NULL){
        printf("error opening file!\n");
        return;
}
printf("\n                 ________ADD EMPLOYEE________\n");   
printf("\nenter number of employees : ");
scanf("%d",&n);

for(int i=0;i<n;i++){
        salary s;
    printf(" Employee :%d \n",i+1);
    printf("\nEnter employee id : ");
    scanf("%d",&s.emp_id);
    printf("Enter name : ");
    scanf(" %[^\n]",s.name);
    printf("Enter designation : ");
    scanf(" %[^\n]",s.designation);
    printf("Enter department : ");
    scanf(" %[^\n]",s.department);
    printf("Enter basic_salary : ");
    scanf(" %d",&s.basic_salary);
    printf("Enter allowance : ");
    scanf("%d",&s.allowance);
    printf("Enter deduction : ");
    scanf("%d",&s.deduction);

    s.net_salary=netsalary(s.allowance,s.basic_salary,s.deduction);
    fwrite(&s,sizeof(salary),1,ptr);
    printf("netsalary : %d\n",s.net_salary);
}
    fclose(ptr);
}

void generate_payslip(){
        int f=0,id;
FILE *ptr=fopen("salary.dat","rb");
if(ptr==NULL){
printf("ERROR OPENING FILE!\n");
return ;}
salary s;
 
printf("\nenter employee id : ");
scanf("%d",&id);

 while(fread(&s,sizeof(salary),1,ptr)){
  if(s.emp_id==id){
        f=1;
        printf("\n---------------******---------------\n");
        printf("   ________EMPLOYEE PAYSLIP________\n"); 
        printf("---------------******---------------\n");
        printf("\n employee id : %d",s.emp_id);
        printf("\n name        : %s",s.name);
        printf("\n designation : %s",s.designation);
        printf("\n department  : %s",s.department);
        printf("\n basic_salary: %d",s.basic_salary);
        printf("\n allowance   : %d",s.allowance);
        printf("\n deduction   : %d",s.deduction);
        printf("\n net salary  : %d\n\n",netsalary(s.allowance,s.basic_salary,s.deduction));
        break;}
        }
if(!f)
printf("\nEmployee with ID %d not found!\n\n", id);

fclose(ptr);
}

void search_employee(){
        FILE *ptr;
        ptr=fopen("salary.dat","rb");
        if(!ptr){
        printf("error opening file!\n");
        return;}
        int choice,empid;
        char name[50];
        salary s;
         do{
                 printf("\n                 ________SEARCH EMPLOYEE SALARY ________\n");  
                int f=0;
                rewind(ptr);
                printf("choice:\n");
                printf("1.search by name \n");
                printf("2.search by employee id  \n");
                printf("3.Exit\n");
                printf("\nenter choice : ");
                scanf("%d",&choice);

                switch(choice){
                case 1: 
                printf("Enter name : ");
                        scanf(" %[^\n]",name);
                 while(fread(&s,sizeof(salary),1,ptr)){
                        if(strstr(name,s.name)!=NULL){
                                f=1;
                                rewind(ptr);
                                printf("\nemployee id  : %d",s.emp_id);
                                printf("\nname         : %s",s.name);
                                printf("\ndesignation  : %s",s.designation);
                                printf("\ndepartment   : %s",s.department);
                                printf("\nbasic salary : %d",s.basic_salary);
                                printf("\nallowance    :%d",s.allowance);
                                printf("\ndeduction    :%d",s.deduction);
                                printf("\nnet_salary   :%d\n\n",s.net_salary);
                                break;}
                        }
                        if(!f)
                        printf("No employee found\n\n");
                        break;
                
                case 2: 
                         printf("Enter employee id : ");
                        scanf("%d",&empid);
                        while(fread(&s,sizeof(salary),1,ptr)){
                        if(empid==s.emp_id){
                                f=1;
                                printf("\nemployee id  : %d",s.emp_id);
                                printf("\nname         : %s",s.name);
                                printf("\ndepartment   : %s",s.department);
                                printf("\ndesignation  : %s",s.designation);
                                printf("\nbasic_salary : %d",s.basic_salary);
                                printf("\nallowance    :%d",s.allowance);
                                printf("\ndeduction    :%d",s.deduction);
                                printf("\nnet_salary   :%d\n\n",s.net_salary);
                                break;}
                        }
                        if(!f)
                        printf("no employee id found\n\n");
                        break;
                }
        }
         while(choice!=3);
fclose(ptr);
}

void update_salary(){
        FILE *ptr;
         ptr =fopen("salary.dat","rb+");
         if (ptr==NULL){
                printf("error opening file!\n");
         }
         int empid,f=0;
         salary s;
        printf("\n                 ________UPDATE SALARY________\n");  
        printf("enter employee id : ");
        scanf("%d",&empid);
            while(fread(&s,sizeof(salary),1,ptr)){
            if(empid==s.emp_id){
                f=1;
                printf("\nenter name : ");
                scanf(" %[^\n]s",s.name);
                printf("\n enter designation : ");
                scanf(" %[^\n]s",&s.designation);
                printf("\n enter department : ");
                scanf(" %[^\n]s",&s.department);
                printf("\nenter basic_salary : ");
                scanf("%d",&s.basic_salary);
                printf("\nenter allowance : ");
                scanf("%d",&s.allowance);
                printf("\n enter deduction: ");
                scanf(" %d",&s.deduction);
                s.net_salary= netsalary(s.allowance,s.basic_salary,s.deduction);
                fseek(ptr,-sizeof(salary),SEEK_CUR);
                fwrite(&s,sizeof(salary),1,ptr);
                printf("Employee record updated successfully.\n");
            break;
            }
        }
        if(!f)
        printf("no employee id found\n\n");
            
        fclose(ptr);}

void delete_employee(){
        FILE*ptr=fopen("salary.dat","rb");
        if(!ptr){
        printf("file not opening!\n");
        return ;}
        FILE*temp=fopen("temp.dat","wb");
        if(!temp){
        printf("file not opening!\n");
        return;}
        int empid,f=0;
        salary s;
        printf("\n                 ________DELETE employee________\n");  
        printf("\nenter employee id to delete : ");
        scanf("%d",&empid);
        while(fread(&s,sizeof(salary),1,ptr)){
                if(s.emp_id==empid){
                   f=1;
                   continue; }
                fwrite(&s,sizeof(salary),1,temp);
        }
        fclose(ptr);
        fclose(temp);

        remove("salary.dat");
        rename("temp.dat","salary.dat");
        if(f)
        printf("employee deleted sucessfully.\n");
        else 
        printf("no employee with id %d not found.\n",empid);      
}

int netsalary(int allowance,int bsalary,int deduct){
    return allowance+bsalary-deduct;
}
