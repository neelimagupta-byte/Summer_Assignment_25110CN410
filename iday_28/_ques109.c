#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct books{
     int book_id;
     char name[50];
    char author[11];
     char publisher[50];
     int year;
     float price;
     int quantity;
     char student[50];
     char date[11];
 } book ;
book b,issue;
void add_books();
void display_books();
void search_books();
void update_books();
void delete_books();
void b_issue();
void b_return();

int main(){
    int choice;
    printf(" \n                  ***************** LIBRARY MANAGEMENT SYSTEM *******************\n\n");
    do{
        printf("\nenter your choice: \n");
        printf("1.Add new books.\n");
        printf("2.Update books \n");
        printf("3.Display all bookss detail\n");
        printf("4.Search a book\n");
        printf("5.Delete books\n");
        printf("6.Book issue \n");
        printf("7.Book return");
        printf("8.Exit\n");
        printf("enter a choice : ");
        scanf("%d",&choice);

        switch(choice){
                case 1: add_books();
                        break;
                case 2: update_books();
                        break;
                case 3: display_books();
                        break;
                case 4: search_books();
                        break;
                case 5: delete_books();
                        break;
                case 6: b_issue();
                    break;
                case 7: b_return();
                    break;
                case 8: printf("exiting\n");
                        break;
                default : 
                        printf("INVALID INPUT \n\n");
                }
    }
        while(choice!=8);
return 0; }

 int i,n=0,bookid,f=0;
void add_books(){
        FILE *ptr=fopen("library.dat","ab");
        if(!ptr){
                printf("file not opening! ");
                return;}
book b;

printf("\n                 ________ADD BOOKS________\n");   
printf("\nenter number of books : ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("\n book :%d \n",i+1);
    printf("\nenter books id : ");
    scanf("%d",&b.book_id);
    printf("\nenter book name: ");
    scanf(" %[^\n]",b.name);
    printf("\nenter author name : ");
    scanf(" %[^\n]",&b.author);
    printf("\nenter publisher : ");
    scanf(" %[^\n]",&b.publisher);
    printf("\nenter year of publication : ");
    scanf(" %d",&b.year);
    printf("\nenter price : ");
    scanf(" %f",&b.price);
    printf("\nenter quantity: ");
    scanf(" %d",&b.quantity);

fwrite(&b,sizeof(book),1,ptr);
}
fclose(ptr);
printf("\nBooks added successfully!\n");
}
void display_books(){

FILE *ptr=fopen("library.dat","rb");
if(!ptr){
        printf("file not opening !");
        return ;
        }
book b;
printf("\n                 ________DISPLAY books________\n");  
printf("Details of books : \n");
while(fread(&b,sizeof(book),1,ptr)){
    printf("\n books id            : %d",b.book_id);
    printf("\n book name           : %s",b.name);
    printf("\n author name         : %s",b.author);
    printf("\n publisher           : %s",b.publisher);
    printf("\n year of publication : %d",b.year);
    printf("\n price               : %.2f",b.price);
    printf("\n quantity            : %d\n",b.quantity);
    }
    fclose(ptr);
}
void search_books(){
        FILE*ptr=fopen("library.dat","rb");
        if(!ptr){printf("file not opening!");
                return;}
        book b; 
        int choice,bookid;
        char name[50];
       
         do{
                printf("choice:\n");
                printf("1. search by book name\n");
                printf("2.search by books id  \n");
                printf("3.Exit\n");
                printf("\nenter choice : ");
                scanf("%d",&choice);

                switch(choice){
                case 1:
                        printf("enter the book name: ");
                        scanf(" %[^\n]",name);
                        for (int i = 0; b.name[i] != '\0'; i++) {
                                b.name[i]=tolower((unsigned char)b.name[i]);}
                        while(fread(&b,sizeof(book),1,ptr)){
                        if(strstr(name,b.name)!=NULL){
                                f=1;
                                printf("\n books id : %d",b.book_id);
                                printf("\n book name: %s",b.name);
                                printf("\n author name : %s",b.author);
                                printf("\n publisher : %s",b.publisher);
                                printf("\n year of publication :%d\n\n",b.year);
                                printf("\n price : %.2f",b.price);
                                printf("\n quantity : %d",b.quantity);
                                break;}}
                        if(f==0)
                        printf("no book namefound\n\n");
                        f=0;
                        break;
                case 2: 
                         printf("enter the books id : ");
                        scanf("%d",&bookid);
                        rewind(ptr);
                        while(fread(&b,sizeof(book),1,ptr)){
                        if(bookid==b.book_id){
                                f=1;
                                printf("\n books id : %d",b.book_id);
                                printf("\n book name: %s",b.name);
                                printf("\n author name : %s",b.author);
                                printf("\n publisher : %s",b.publisher);
                                printf("\n year of publication :%d\n\n",b.year);
                                printf("\n price : %.2f",b.price);
                                printf("\n quantity : %d",b.quantity);
                                break;}}
                        if(f==0)
                        printf("no books id found\n\n");
                        f=0;
                        break;
                }
        }
         while(choice!=3);
         fclose(ptr);
}
void update_books(){
        FILE *ptr=fopen("library.dat","rb+");
        if(!ptr){
                printf("file not opening!");
                return;
        }
        book b;
        printf("\n                 ________UPDATE books________\n");  
        printf("enter books id to update : ");
        scanf("%d",&bookid);
        printf("search the book to update");
        search_books();
        while(fread(&b,sizeof(book),1,ptr)){
         if(bookid==b.book_id){
                printf("\nenter books id : ");
                scanf("%d",&b.book_id);
                printf("\nenter book name: ");
                scanf(" %[^\n]",b.name);
                printf("\nenter author name : ");
                scanf(" %[^\n]",b.author);
                printf("\nenter publisher : ");
                scanf(" %[^\n]",b.publisher);
                printf("\nenter year of publication : ");
                scanf(" %d",&b.year);
                printf("\nenter price : ");
                scanf(" %f",&b.price);
                printf("\nenter quantity: ");
                scanf("%d",&b.quantity);
                fseek(ptr,-sizeof(book),SEEK_CUR);
                fwrite(&b,sizeof(book),1,ptr);
                f=1;
                break;}}
        if(f==0)
        printf("no books id found\n\n");
        f=0;
        fclose(ptr);
}

void delete_books(){
        FILE*ptr=fopen("library.dat","rb");
        if(!ptr){
                printf("file not opening!");
                return;
        }
        FILE*temp=fopen("temp.dat","wb");
        if(!temp){
                printf("file not opening!");
                return;
        }
        book b;
        printf("\n                 ________DELETE books________\n");  
        printf("\nenter books id to delete : ");
        scanf("%d", &bookid);
        while(fread(&b,sizeof(book),1,ptr)){
                if(b.book_id==bookid){
                f=1;
                continue;
                }
                fwrite(&b,sizeof(book),1,temp);}
        fclose(ptr);
        fclose(temp);
        remove("library.dat");
        rename("temp.dat","library.dat");
        if(f==1)
        printf("deleated successfully\n\n");
        else 
        printf("no book with id %d not found.\n",bookid);
        f=0;
}
void b_issue(){
FILE*ptr=fopen("library.dat","rb");
        if(!ptr){
        printf("file not opening!");
        return;
        }
FILE*p;
book b,issue;
int choice,b_id;
do{
        printf("\nchoose: \n");
        printf("1.add issue details \n");
        printf("2.show issue details \n");
        printf("3.Exit\n");
        printf("enter choice : ");
        scanf("%d",&choice);
        switch(choice){
        case 1: 
        p=fopen("issue.dat","ab");
        if(!p){
        printf("file not opening!");
        return;
        }
        printf("enter book ID : ");
        scanf("%d",&b_id);
        rewind(ptr);
        while(fread(&b,sizeof(book),1,ptr)){
        if(b.book_id==b_id){
                if(b.quantity>0){
                printf("enter student name : ");
                scanf(" %[^\n]",issue.student);
                printf("enter date of issue : ");
                scanf(" %[^\n]",issue.date);
                printf("enter no. of book issuesd :");
                scanf("%d",&issue.quantity);
                
                b.quantity=b.quantity-issue.quantity;
                fseek(ptr,-sizeof(book),SEEK_CUR);
                fwrite(&b,sizeof(book),1,ptr);
                strcpy(issue.name,b.name);
                issue.book_id=b.book_id;
                fwrite(&issue,sizeof(issue),1,p);
                printf("Book issued successfully!\n");}
                else
                printf("no book found");
                break;
                }}
                fclose(p);
                break;
                
        case 2:
        p=fopen("issue.dat","rb");
        if(!p){
        printf("file not opening!");
        return;
        }
        rewind(p);
        int f=0;
        while(fread(&issue,sizeof(issue),1,p)){
                f=1;
                printf("Name of student : %s\n",issue.student);
                printf("Book name       : %s\n",issue.name);
                printf("book id         : %d\n",issue.book_id);
                printf("quantity        : %d\n",issue.quantity);
                printf("\nDate of issue : %s\n", issue.date);
        }
        if (!f) {
        printf("No issue records found.\n");
    }
        fclose(p);
        break;

}}while(choice!=3);
fclose(ptr);
 }

void b_return(){
    FILE *ptr = fopen("library.dat", "rb+");
    if (!ptr) {
        printf("Library file not opening!\n");
        return;
    }

    FILE *p = fopen("issue.dat", "rb");
    if (!p) {
        printf("Issue file not opening!\n");
        fclose(ptr);
        return;
    }

    FILE *temp = fopen("temp_issue.dat", "wb");
    if (!temp) {
        printf("Temp issue file not opening!\n");
        fclose(ptr);
        fclose(p);
        return;
    }

    book b, issue;
    int bookid, f = 0;

    printf("\n                 ________RETURN BOOKS________\n");  
    printf("Enter book ID to return: ");
    scanf("%d", &bookid);
    while (fread(&issue, sizeof(book), 1, p)) {
        if (issue.book_id == bookid) {
            f = 1;
            rewind(ptr);
            while (fread(&b, sizeof(book), 1, ptr)) {
                if (b.book_id == bookid) {
                    b.quantity+=issue.quantity; 
                    fseek(ptr,-sizeof(book), SEEK_CUR);
                    fwrite(&b,sizeof(book),1,ptr);
                    break;
                }
            }
            continue;
        }
        fwrite(&issue, sizeof(book), 1, temp);
    }
    fclose(ptr);
    fclose(p);
    fclose(temp);

    remove("issue.dat");
    rename("temp_issue.dat", "issue.dat");

    if (f == 1)
        printf("Book returned successfully!\n\n");
    else
        printf("No issued book with ID %d found.\n", bookid);
}

