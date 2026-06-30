#include<stdio.h>
#include<string.h>

typedef struct ACCOUNT{
long long  acc_no;
char name[50];
char phone[50];
float balance;
} account;
account a;
void create_acc();
void update_acc();
void deposit_money();
void withdraw_money();
void display_acc();
void search_acc();
void delete_acc();

int main(){
        int choice;
        printf("\n________________________________________________________________________\n");
        printf("|                      BANK ACCOUNT SYSTEM                               |\n");
        printf("_________________________________________________________________________\n");

        do{
                printf("\nenter choice : \n");
                printf("1.Create account\n");
                printf("2.Update account\n");
                printf("3.Deposit Money\n");
                printf("4.Withdraw Money\n");
                printf("5.Display accounts\n");
                printf("6.Search account\n");
                printf("7.Delete account\n");
                printf("8.Exit\n");
                printf("Enter choice: ");
                scanf("%d",&choice);

                switch(choice){
                case 1: create_acc();
                 break;
                case 2: update_acc(); 
                break;
                case 3: deposit_money();
                 break;
                case 4: withdraw_money();
                 break;
                case 5: display_acc();
                 break;
                case 6: search_acc();
                 break;
                case 7: delete_acc();
                 break; 
                case 8: printf("Exiting.....");   
                 break;
                default: printf("INVALID CHOICE!\n");
                 break;
                }
        } while(choice!=8);
return 0;}
void create_acc(){
FILE*ptr=fopen("account.dat","ab");
if(!ptr){
        printf("error opening file!");
        return;
}
account a;
    printf("Enter Account Number: ");
    scanf("%lld", &a.acc_no);
    
    if(a.acc_no < 100000000000LL || a.acc_no > 999999999999LL) {
        printf("Invalid account number! \n Must be positive and at least 12 digits.\n");
        fclose(ptr);
        return;
    }
    printf("Enter Name: ");
    scanf("%s", a.name);
    printf("Enter Phone: ");
    scanf("%s", a.phone);
    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);
    fwrite(&a,sizeof(account),1,ptr);
    fclose(ptr);
    printf("Account added successfully.\n");
}
void update_acc(){
FILE*ptr=fopen("account.dat","ab");
if(!ptr){
        printf("error opening file!");
        return;
}
account a;
long accno;
printf("enter account number: ");
scanf("%lld",&accno);
while(fread(&a,sizeof(account),1,ptr)){
   if(a.acc_no == accno) {
            printf("Enter New Name: ");
            scanf("%s", a.name);
            printf("Enter New Phone: ");
            scanf("%s", a.phone);
            fseek(ptr, -sizeof(account), SEEK_CUR);
            fwrite(&a, sizeof(account), 1,ptr);
            printf("Account updated successfully!\n");
            fclose(ptr);
            return;
        }} 
        
        printf("account not found!\n");
        fclose(ptr);
}
void deposit_money(){
        long long accno;
        float amount;
    FILE*ptr=fopen("account.dat","rb+");
    if(!ptr){
        printf("error opening file \n");
        return;
    }
    account a;
    printf("Enter Account Number: ");
    scanf("%lld", &accno);
    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    while(fread(&a,sizeof(account), 1,ptr)) {
        if(a.acc_no == accno) {
            a.balance+=amount;
            fseek(ptr, -sizeof(account), SEEK_CUR);
            fwrite(&a, sizeof(account), 1,ptr);
            printf("Deposit successful! New Balance: %.2f\n", a.balance);
            fclose(ptr);
            return;
        }
    }
    printf("Account not found!\n");
    fclose(ptr);
}

void withdraw_money(){
FILE*ptr=fopen("account.dat","rb+");
long long accno;
float amount;
if(!ptr){
        printf("error opening file!\n");
        return;
}
account a;
printf("Enter Account Number: ");
    scanf("%lld", &accno);
    printf("Enter Withdraw Amount: ");
    scanf("%f", &amount);

    while(fread(&a, sizeof(account), 1,ptr)) {
        if(a.acc_no == accno) {
            if(a.balance >= amount) {
                a.balance -= amount;
                fseek(ptr, -sizeof(account), SEEK_CUR);
                fwrite(&a, sizeof(account), 1,ptr);
                printf("Withdrawal successful! New Balance: %.2f\n", a.balance);
            } else {
                printf("Insufficient balance!\n");
            }
            fclose(ptr);
            return;
        }
        printf("account not found!\n");
        fclose(ptr);
}}
void display_acc(){
FILE*ptr=fopen("account.dat","rb");
if(!ptr){
        printf("error opening file!");
        return;
}
account a;
printf("\n__________________________ ALL ACCOUNTS ________________________\n");
while(fread(&a,sizeof(account),1,ptr)){
    printf("Account Number: %lld\n",a.acc_no);
    printf("Name: %s\n",a.name);
    printf("Phone: %s\n",a.phone);
    printf("Balance: %f\n\n", a.balance);
}
fclose(ptr);
}
void search_acc(){
long long accno;
FILE*ptr=fopen("account.dat","rb");
if(!ptr){
        printf("error opening file!\n");
        return;
}
account a;
printf("Enter Account number to search: ");
    scanf("%lld", &accno);
while(fread(&a,sizeof(account),1,ptr)){
  if(a.acc_no==accno){
    printf("Account Number: %ld\n",a.acc_no);
    printf("Name: %s\n",a.name);
    printf("Phone: %s\n",a.phone);
    printf("Balance: %f\n", a.balance);
    fclose(ptr);
    return;
}}
printf("account not found!\n");
fclose(ptr);
}
void delete_acc(){
    long long accno;
    FILE *ptr = fopen("account.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if(ptr == NULL || temp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Account Number to Delete: ");
    scanf("%lld", &accno);

    while(fread(&a, sizeof(account), 1,ptr)) {
        if(a.acc_no != accno) {
            fwrite(&a, sizeof(account), 1,temp);
        }
    }
    fclose(ptr);
    fclose(temp);

    remove("account.dat");
    rename("temp.dat","account.dat");
    printf("account deleted sucessfully \n");
}
