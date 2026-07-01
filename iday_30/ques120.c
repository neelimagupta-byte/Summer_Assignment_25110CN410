#include<stdio.h>
#include<string.h>

typedef struct expense{
    float amount;
    char name[50];
    char category[20];
    int id;
    char date[10];
    float spent;
    char paymentmode[10];
    char description[100];
   
    } expense; 
expense e;

 void add();
 void view();
 void update();
 void search();
 void delete();
  char* category();

 int main(){
    printf("_______________________________________________________\n");
    printf("                 EXPENSE TRACKER\n");
    printf("--------------------------------------------------------\n");
    int choice ;
    do{
        printf("\n1.ADD EXPENSE\n");
        printf("2.SHOW ALL EXPENSES \n");
        printf("3.UPDATE EXPENSES\n");
        printf("4.SEARCH EXPENSE by CATEGORY\n");
        printf("5.DELETE EXPENSE\n");
        printf("6.EXIT\n\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
         case 1: add();
                 break;
         case 2: view();
                 break;
         case 3: update();
                break;
         case 4: search();
                break;
         case 5: delete();
                break;
         case 6: printf("exiting.....");
                break;
         default:
          printf("INVALID INPUT !\n");       
         }
    } 
    while(choice!=6);

}

 void add(){
    int ch;
    FILE*fp=fopen("expense.dat","ab");
    if(!fp){
        printf("error opening file!");
        return;
    }
    expense e;
    printf("\nadd expense:\n\n");
    do{
        printf("Id                : ");
        scanf("%d",&e.id);
        strcpy(e.category,category());
        printf("Date (DD/MM/YYYY) : ");
        scanf(" %[^\n]",e.date);
        printf("Amount spent      : ");
        scanf("%f",&e.amount);
        printf("Description       : ");
        scanf(" %[^\n]",e.description);
        printf("Payment mode      : ");
        scanf(" %[^\n]",e.paymentmode);
        fwrite(&e,sizeof(expense),1,fp);
    
    printf("do you want to add more :\n1.yes\n2.no : ");
    scanf("%d",&ch);
    if(ch!=1 && ch!=2)
    printf("invalid input!\n");    
} while(ch!=2);
fclose(fp);
 }

 void view(){
    FILE*fp=fopen("expense.dat","rb");
    if(!fp){
        printf("error opening file!");
        return;
    }
    expense e;
    while(fread(&e,sizeof(expense),1,fp)){
        printf("Id                : %d\n",e.id);
        printf("Category          : %s\n",e.category);
        printf("Date (DD/MM/YYYY) : %s\n",e.date);
        printf("Amount spent      : %.2f\n",e.amount);
        printf("Description       : %s\n",e.description);
        printf("Payment mode      : %s\n\n",e.paymentmode);
    }
    fclose(fp);
 }
 void update(){
    int i;
 FILE*fp=fopen("expense.dat","rb+");
    if(!fp){
        printf("error opening file!");
        return;
    }
    expense e;
    printf("\nenter ID to update: ");
    scanf("%d",&i);
    while(fread(&e,sizeof(expense),1,fp)){
        if(i==e.id){
        printf("\nexisting data\n");
        printf("Id                : %d\n",e.id);
        printf("Category          : %s\n",e.category);
        printf("Date (DD/MM/YYYY) : %s\n",e.date);
        printf("Amount spent      : %.2f\n",e.amount);
        printf("Description       : %s\n",e.description);
        printf("Payment mode      : %s\n\n",e.paymentmode);
        printf("enter new data :\n");
        printf("Id                : ");
        scanf("%d",&e.id);
        printf("Category          :");
        strcpy(e.category,category());
        printf("Date (DD/MM/YYYY) : ");
        scanf(" %[^\n]",e.date);
        printf("Amount spent      : ");
        scanf(" %f",&e.amount);
        printf("Description       : ");
        scanf(" %[^\n]",e.description);
        printf("Payment mode      : ");
        scanf(" %[^\n]",e.paymentmode);
        fseek(fp,sizeof(expense),SEEK_CUR);
        fwrite(&e,sizeof(expense),1,fp);
        fclose(fp);
        return;
        }
    }
    printf("ID not found!\n");
    fclose(fp);
    return;
 }

 void search(){
    int f=0;
     FILE*fp=fopen("expense.dat","rb");
    if(!fp){
        printf("error opening file!");
        return;
    }
    expense e;
    char *cat = category();
    while(fread(&e,sizeof(expense),1,fp)){
     if(strcmp(e.category,cat)==0){
        printf("Id                : %d\n",e.id);
        printf("Category          : %s\n",e.category);
        printf("Date (DD/MM/YYYY) : %s\n",e.date);
        printf("Amount spent      : %.2f\n",e.amount);
        printf("Description       : %s\n",e.description);
        printf("Payment mode      : %s\n\n",e.paymentmode);
        f=1;}
    }
    if(f==0)
    printf("no category found!\n");
    fclose(fp);
    return;
 }

 void delete(){
        int id;
       FILE*fp=fopen("expense.dat","rb");
    if(!fp){
        printf("error opening file!");
        return;
    }
    FILE*p=fopen("temp.dat","wb");
    if(!p){
        printf("error opening file!");
        return;
    }
    expense e;
    printf("\nenter id: ");
    scanf("%d",&id);
    while(fread(&e,sizeof(expense),1,fp)){
     if(e.id!=id){ 
        fwrite(&e,sizeof(expense),1,p);
      }
    }
    fclose(fp);
    fclose(p);
    remove("expense.dat");
    rename("temp.dat","expense.dat");
    printf("Record deleted successfully!\n");
}

 char* category(){
    static char str[30];
    int cat;
    do{ 
    printf("\n\n1.food        |   2.clothes   |   3.vehicle         |   4.transport   \n5.education   |   6.medical   |   7.entertainment   |   8.others\n");
    printf("choose category : ");
    scanf("%d",&cat);
    switch(cat){
        case 1: strcpy(str,"food");
                break;
        case 2: strcpy(str,"clothes");
                break;
        case 3: strcpy(str,"vehicle");
                break;
        case 4: strcpy(str,"transport");
                break;
        case 5: strcpy(str,"education");
                break;
        case 6: strcpy(str,"medical");
                break;
        case 7: strcpy(str,"entertainment");
                break;
        case 8: strcpy(str,"others");
                break;
        default: printf("invalid choice \n");
        
    }} while(cat<1 || cat>8);
    return str;
 }


