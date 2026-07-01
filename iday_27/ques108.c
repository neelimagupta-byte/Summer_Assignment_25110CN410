#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct marksheet{
    char name[50];
    int rollno;
    char class[4];
    char section;
    char dob[11];
    char gender;
    char subject[5][50];
    int  marks[5];
    int  tmarks[5];
    char status[10];

} marks;
marks m;

void add();
void generate_marksheet();
int search();
float percentage(float,float);
void edit_marks();
void edit_details();
void delete();
int main(){
    int choice;
printf("\n                 ================================================================\n");
printf("                               MARKSHEET GENERATION SYSTEM                   \n");
printf("                  ================================================================\n");
do{
    printf("\nchoice:\n");
    printf("1.ADD DETAILS\n");
    printf("2.GENERATE MARKSHEET\n");
    printf("3.SEARCH MARKSHEET DETAILS\n");
    printf("4.EDIT MARKS\n");
    printf("5.EDIT STUDENT DETAILS\n");
    printf("6.DELETE DETAILS\n");
    printf("7.EXIT\n");
    printf("enter choice : ");
    scanf("%d",&choice);
    switch(choice){
            case 1: add();
                    break;
            case 2: generate_marksheet();
                    break;
            case 3: search();
                    break;
            case 4: edit_marks();
                    break;
            case 5: edit_details();
                    break;
            case 6: delete();
                    break;
            case 7: printf("Exiting.....\n");
                    break;
            default : 
                    printf("INVALID INPUT \n\n");
                    }
}
while(choice!=7);
}
void add(){
   FILE*ptr=fopen("marks.dat","wb");
   if(!ptr){
        printf("file not opening!\n");
        return;
   }
   int j,i,n;
   printf("enter no. of students : ",n);
   scanf("%d",&n);
   marks m;
   
   for(i=0;i<n;i++){
    printf("student no. %d\n\n",i+1);
    printf("ENTER NAME : ");
    scanf(" %[^\n]",m.name);
    printf("ENTER CLASS : ");
    scanf(" %[^\n]",m.class);
    printf("ENTER ROLL NUMBER : ");
    scanf("%d",&m.rollno);
    printf("ENTER SECTION : ");
    scanf(" %c",&m.section);
    printf("ENTER DATE OF BIRTH : ");
    scanf(" %[^\n]",&m.dob);
    printf("ENTER GENDER (F/M): ");
    scanf(" %c",&m.gender);
    printf("ENTER status (pass/fail): ");
    scanf(" %[^\n]",m.status); 
    for(j=0;j<5;j++){
    printf("\nSUBJECT NO.%d\n",j+1);   
    printf("ENTER SUBJECT : ");
    scanf(" %[^\n]",&m.subject[j]);
    printf("ENTER MARKS : ");
    scanf("%d",&m.marks[j]);
    printf("ENTER TOTAL MARKS : ");
    scanf("%d",&m.tmarks[j]);

for (int i = 0; m.name[i] != '\0'; i++) {
    m.name[i] = tolower((unsigned char)m.name[i]);
}

}
    fwrite(&m,sizeof(marks),1,ptr);}
fclose(ptr);
}

void generate_marksheet(){
        int i,rno,f=0;
        float m_=0,t=0;
        FILE *ptr=fopen("marks.dat","rb");
        if(!ptr){
                printf("file not opening!\n");
                return;
        }
        marks m;
        printf("\nENTER ROLL NUMBER : ");
        scanf("%d",&rno);
        while(fread(&m,sizeof(marks),1,ptr)){
        if(rno==m.rollno){
                f=1;
        printf("\n-------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("                                                        MARKSHEET                 \n");
        printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("NAME     :        %s\n",m.name);
        printf("DOB      :        %s\n",m.dob);
        printf("CLASS    :        %s\n",m.class);
        printf("SECTION  :        %c\n",m.section);
        printf("STATUS   :        %s\n",m.status);
        printf("ROLL NO. :        %d\n",m.rollno);
        printf("GENDER   :        %c\n",m.gender);
        printf("\n-------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("SUBJECT                                  MARKS                        TOTAL                        PERCENTAGE\n");
        for(i=0;i<5;i++){
        printf("%-40s %-30d %-40d\n", m.subject[i], m.marks[i], m.tmarks[i]);
        m_=m_+(float)m.marks[i];
        t=t+(float)m.tmarks[i];
        }
        printf("                                         %.2f                            %.2f                              %.2f",m_,t,percentage(m_,t));
        printf("\n-------------------------------------------------------------------------------------------------------------------------------------\n");
        break;}
        }
        if(!f)
        printf("no roll number found\n");
        fclose(ptr);
}

int search(){
FILE *ptr;
        ptr=fopen("markS.dat","rb");
        if(!ptr){
        printf("error opening file!\n");
        return 0;}
        int choice,rno;
        char name[50];
        marks m;
         do{
                 printf("\n                 \n");  
                int f=0;
                rewind(ptr);
                printf("choice:\n");
                printf("1.search by name \n");
                printf("2.search by roll no.  \n");
                printf("3.Exit\n");
                printf("\nenter choice : ");
                scanf("%d",&choice);

                switch(choice){
                case 1: 
                printf("Enter name : ");
                        scanf(" %[^\n]",name);
                 while(fread(&m,sizeof(marks),1,ptr)){
                        if(strstr(name,m.name)!=NULL){
                                f=1;
                                rewind(ptr);
                                printf("\nroll no.     : %d",m.rollno);
                                printf("\nname         : %s",m.name);
                                printf("\nclass        : %s",m.class);
                                printf("\nsection      : %c",m.section);
                                printf("\ndob          : %s",m.dob);
                                printf("\ngender       :%d",m.gender);
                                printf("\nstatus       :%s",m.status);
                                break;}
                        }
                        if(!f)
                        printf("No student found\n\n");
                        break;
                
                case 2: 
                         printf("Enter roll no. : ");
                        scanf("%d",&rno);
                        while(fread(&m,sizeof(marks),1,ptr)){
                        if(rno==m.rollno){
                                f=1;
                                printf("\nroll no.     : %d",m.rollno);
                                printf("\nname         : %s",m.name);
                                printf("\nclass        : %s",m.class);
                                printf("\nsection      : %c",m.section);
                                printf("\ndob          : %s",m.dob);
                                printf("\ngender       :%d",m.gender);
                                printf("\nstatus       :%d",m.status);
                                break;}
                        }
                        if(!f)
                        printf("no roll no. found\n\n");
                        break;
                }
        }
         while(choice!=3);
fclose(ptr);
return rno;}

float percentage(float m,float t){
        float per;
        per=(m/t)*100;
        return per;
}

void edit_details(){
     FILE *ptr;
         ptr =fopen("marks.dat","rb+");
         if (!ptr){
                printf("error opening file!\n");
         }
         int rno,f=0;
         marks m;
        printf("\n                 ________UPDATE STUDENT DETAILS________\n");  
        search();
        printf("enter roll no.: ");
        scanf("%d",&rno);
        printf("enter details to update : \n");
            while(fread(&m,sizeof(marks),1,ptr)){
            if(rno==m.rollno ){
                f=1;
                printf("\nenter name : ");
                scanf(" %[^\n]s",m.name);
                printf("\n enter dob : ");
                scanf(" %[^\n]s",&m.dob);
                printf("\n enter gender : ");
                scanf(" %c",&m.gender);
                printf("\nenter class : ");
                scanf(" %s",&m.class);
                printf("\nenter section : ");
                scanf(" %c",&m.section);
                printf("\nenter status: ");
                scanf(" %s",&m.status);
                fseek(ptr,-sizeof(marks),SEEK_CUR);
                fwrite(&m,sizeof(marks),1,ptr);
                printf("student details updated successfully.\n");
            break;
            }
        }
        if(!f)
        printf("no student roll number found\n\n");
            
        fclose(ptr);
}

void edit_marks(){
FILE *ptr;
         ptr =fopen("marks.dat","rb+");
         if (ptr==NULL){
                printf("error opening file!\n");
         }
         int j,rno,f=0;
         marks m;
        printf("\n                 ________UPDATE MARKS________\n");  
        printf("enter student id : ");
        scanf("%d",&rno);
        printf("enter details to update : \n");
            while(fread(&m,sizeof(marks),1,ptr)){
            if(rno==m.rollno){
                f=1;
                for(j=0;j<5;j++){
                printf(" %d\n\n",j+1);   
                printf("ENTER SUBJECT : ");
                scanf(" %[^\n]",&m.subject[j]);
                printf("ENTER MARKS : ");
                scanf("%d",&m.marks[j]);
                printf("ENTER TOTAL MARKS : ");
                scanf("%d",&m.tmarks[j]);}
                fseek(ptr,-sizeof(marks),SEEK_CUR);
                fwrite(&m,sizeof(marks),1,ptr);
                printf("marks updated successfully.\n");
            break;
            }
        }
        if(!f)
        printf("no student roll number found\n\n");
            
        fclose(ptr);}

void delete(){
FILE*ptr=fopen("marks.dat","rb");
        if(!ptr){
        printf("file not opening!\n");
        return ;}
        FILE*temp=fopen("temp.dat","wb");
        if(!temp){
        printf("file not opening!\n");
        return;}
        int rno,f=0;
        marks m;
        printf("\n                 ________DELETE STUDENT DETAILS________\n");  
        printf("\nenter student id to delete : ");
        scanf("%d",&rno);
        while(fread(&m,sizeof(marks),1,ptr)){
                if(m.rollno==rno){
                   f=1;
                   continue; }
                fwrite(&m,sizeof(marks),1,temp);
        }
        fclose(ptr);
        fclose(temp);

        remove("marks.dat");
        rename("temp.dat","marks.dat");
        if(f)
        printf("student deleted sucessfully.\n");
        else 
        printf("no student with id %d not found.\n",rno);      
}
