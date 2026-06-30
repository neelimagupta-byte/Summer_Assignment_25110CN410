#include <stdio.h>
#include <string.h>

typedef struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
} item;
item inventory[100];
int i=0;

void addItem() {
    printf("Enter Item ID: ");
    scanf("%d", &inventory[i].id);
    printf("Enter Item Name: ");
    scanf("%s", inventory[i].name);
    printf("Enter Quantity: ");
    scanf("%d", &inventory[i].quantity);
    printf("Enter Price: ");
    scanf("%f", &inventory[i].price);
    i++;
    printf("Item added successfully!\n");
}

void displayItems() {
    printf("\n--- Inventory List ---\n");
    for(int j=0; j<i; j++) {
        printf("ID: %d\n",inventory[j].id);
        printf("Name: %s\n",inventory[j].name);
        printf("Quantity: %d\n",inventory[j].quantity);
        printf("Price: %.2f\n\n", inventory[j].price);
    }
}

void searchItem() {
    int id;
    printf("Enter Item ID to search: ");
    scanf("%d", &id);
    for(int j=0; j<i; j++) {
        if(inventory[i].id == id) {
            printf("Name: %s\n",inventory[j].name); 
            printf("Qty: %d\n", inventory[j].quantity); 
            printf("Price: %.2f\n\n", inventory[j].price);
            return;
        }
    }
    printf("Item not found!\n");
}

void updateItem() {
    int id;
    printf("Enter Item ID to update: ");
    scanf("%d", &id);
    for(int j=0; j<i; j++) {
        if(inventory[i].id == id) {
            printf("Enter new Quantity: ");
            scanf("%d", &inventory[j].quantity);
            printf("Enter new Price: ");
            scanf("%f", &inventory[j].price);
            printf("Item updated!\n\n");
            return;
        }
    }
    printf("Item not found!\n");
}

void deleteItem() {
    int id;
    printf("Enter Item ID to delete: ");
    scanf("%d", &id);
    for(int j=0; j<i; j++) {
        if(inventory[i].id == id) {
            for(int k=i; k<j-1; k++) {
                inventory[k] = inventory[k+1];
            }
            i--;
            printf("Item deleted!\n");
            return;
        }
    }
    printf("Item not found!\n");
}

int main() {
    int choice;
    do{
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addItem();
                    break;
            case 2: displayItems();
                    break;
            case 3: searchItem();
                    break;
            case 4: updateItem();
                    break;
            case 5: deleteItem();
                    break;
            case 6: printf("EXITING....");
            default: printf("Invalid choice!\n");
            printf("enter choice : ");
            scanf("%d",&choice);
        }
    } while (choice!=6);
}
