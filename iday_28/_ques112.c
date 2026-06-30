#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
int id;
char name[50];
char phone[11];

} contact;

void addContact(FILE *ptr) {
    contact c;
    printf("Enter ID: ");
    scanf("%d", &c.id);
    printf("Enter Name: ");
    scanf("%s", c.name);
    printf("Enter Phone: ");
    scanf("%s", c.phone);

    fwrite(&c, sizeof(contact), 1, ptr);
    printf("Contact added!\n\n");
}

void displayContacts(FILE *ptr) {
    contact c;
    rewind(ptr); 
    printf("\n-------------------------------- ALL CONTACTS --------------------------\n");
    while (fread(&c, sizeof(contact), 1,ptr)) {
        printf("ID: %d\n", c.id);
        printf("Name :  %s\n",c.name);
        printf("Phone: %s\n\n",c.phone);
    }
}

void searchContact(FILE *ptr) {
    contact c;
    int id, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    rewind(ptr);
    while (fread(&c, sizeof(contact), 1, ptr)) {
        if (c.id == id) {
            printf("\nNAME : %s\n",c.name);
            printf("PHONE: %s\n\n",c.phone);
            found = 1;
            break;
        }
    }
    if (!found) printf("Contact not found!\n");
}

void deleteContact(FILE *ptr) {
    contact c;
    int id, f=0;
    FILE *temp = fopen("temp.dat", "wb");

    printf("Enter ID to delete: ");
    scanf("%d", &id);

    rewind(ptr);
    while (fread(&c, sizeof(contact), 1, ptr)) {
        if (c.id != id) {
            fwrite(&c, sizeof(contact), 1, temp);
        } else {
            f= 1;
        }
    }

    fclose(ptr);
    fclose(temp);
    remove("contacts.dat");
    rename("temp.dat", "contacts.dat");

    ptr = fopen("contacts.dat", "rb+"); 

    if (f) printf("Contact deleted!\n\n");
    else printf("Contact not found!\n\n");
}

    
int main(){
    int choice;
printf("\n-------------------------------------------------------------------------------------------------------------\n");
printf("                             CONTACT MANAGEMENT SYSTEM\n");
printf("-------------------------------------------------------------------------------------------------------------\n");

FILE *ptr = fopen("contacts.dat", "rb+");
    if (!ptr) ptr= fopen("contacts.dat", "wb+");

    do {
        printf("\n1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(ptr);
                    break;
            case 2: displayContacts(ptr);  
                    break;
            case 3: searchContact(ptr);
                    break;
            case 4: deleteContact(ptr);
                    break;
            case 5: printf("Exiting...\n");
                    break;
            default: printf("Invalid choice!\n\n");
        }
    } while (choice != 5);

    fclose(ptr);
    return 0;
}







