#include<stdio.h>

void insert_element();
void delete_element();
void display_element();
void search_element();
void sort_array();

int main(){
   int i, choice;
   
    printf("\n              ***************** ARRAY(INTEGER) OPERATION ****************\n\n");
    do{
        printf("\n1.insert element\n");
        printf("2.delete element\n");
        printf("3.display element\n");
        printf("4.search element\n");
        printf("5.sort_array\n");
        printf("6.exit\n");
        printf("enter a choice :  ");
        scanf("%d",&choice);

        switch(choice){
            case 1: insert_element();
                    break;
            case 2: delete_element();
                    break;
            case 3: display_element();
                    break;
            case 4: search_element();
                    break;
           case 5: sort_array();
                    break;
            case 6: printf("\nexiting \n");
                    break;
            default :
                    printf("invalid input!\n\n");        
        }}
        while(choice!=6);
  return 0; }

 int n,j=0,i=0,num,arr[100];
void insert_element(){
        int i=0;
    printf("\nenter number of element to enter : ");
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&arr[i]);

        i++;}
    printf("\nsucessfully inserted elements in array\n\n");
}

void delete_element(){
        int f=0;
    printf("\nEXISISTING ELEMENTS ");
    display_element();
    printf("\nenter element to delete : ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
           if(num==arr[i]){
                for(j=i;j<n-1;j++){
                arr[j]=arr[j+1];}
                n--;
                printf("\ndeleted element sucessfully\n");
                f=1;
                break;}}
if(f==0)
printf("\nno element found.\n\n");}


void display_element(){
        printf("\n                 -------------displaying elements---------------\n");
        
        for(i=0;i<n;i++){
                printf("%d ",arr[i]);}
}

void search_element(){
        int choice,f=0;
        do{
                printf("\n1.Search element ");
                printf("\n2.Search position ");
                printf("\n3.Exit");
                printf("\nenter a choice (1/2/3) : ");
                scanf("%d",&choice);
                switch(choice){
                        case 1: printf("\nenter element : ");
                                scanf("%d",&num);
                                for(i=0;i<n;i++){
                                        if(num==arr[i]){
                                                printf("\n%d is at position %d\n",num,i+1);
                                        f=1;}
                                }
                                if(f==0){
                                        printf("\nno element found\n");
                                break;}
                                break;

                        case 2: printf("\nenter the position : ");
                        scanf("%d",&num);
                        if(num<0 || num>n)
                                printf("invalid input position \n");
                        else if(num>0 && num<n)
                                printf("\nat %d position , %d is present ",num,arr[num-1]);
                                break;
                        
                        case 3: printf("exiting...");
                        break;
                        default :
                                printf("\nINVALID INPUT! \n");
                        }
                        } 
                        while(choice!=3);
                }

void sort_array(){
        for(i=0;i<n;i++){
                for(j=0;j<n-1;j++){
                        if(arr[j]>arr[j+1]){
                         num=arr[j];
                         arr[j]=arr[j+1];
                         arr[j+1]=num;   }
                }}
        display_element();
}