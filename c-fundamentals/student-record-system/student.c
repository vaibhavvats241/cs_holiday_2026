#include<stdio.h>
#include<string.h>
struct student {
    char name[50];
    int age;
    float marks;
};
void display(struct student *s) {
printf("Name  : %s\nage  : %d\nmarks  : %.2f\n", s->name, s->age, s->marks);
}
void savetofile(struct student students[],int count, char filename[]){
    FILE *fp=fopen(filename,"w");
    if(fp==NULL){
        printf("\nFILE CANNOT BE SAVED\n");
        return;
    }
    for(int i=0;i<count;i++){
        fprintf(fp,"%s|%d|%.2f\n",students[i].name,students[i].age,students[i].marks);
    }
    fclose(fp);
    printf("\nDATA SAVED SUCCESSFULLY\n");
}
void loadfromfile(struct student students[],int *count,char filename[]){
    FILE *fp=fopen(filename,"r");
    if(fp==NULL){
        printf("FILE CANNOT BE LOADED\n");
       
        return;
    }
    *count = 0;
    while(fscanf(fp," %49[^|]|%d|%f\n",students[*count].name,&students[*count].age,&students[*count].marks)==3){
        (*count)++;
        if(*count>=100){
            printf("\nMAXIMUM STUDENT LIMIT REACHED\n");
            break;
        }
    }
    fclose(fp);
    printf("\nDATA LOADED SUCCESSFULLY\n");

}
void searchstudent(struct student students[],int count){
    char searchname[100];
    int found =0;
    printf("ENTER STUDENT NAME TO SEARCH : ");
    scanf(" %[^\n]",searchname);
    for(int i=0;i<count;i++){
        if(strcmp(students[i].name,searchname)==0){
            printf("student found\n");
            display(&students[i]);
            found=1;
            break;
        }
    }
    if(!found){
        printf("\nstudent not found\n");
    }
}
void highestmarks(struct student students[],int count){
    if(count==0){
        printf("\nNO STUDENTS AVAILABLE\n");
        return;

    }
    int highest=0;
    for(int i=1;i<count;i++){
        if(students[i].marks>students[highest].marks){
            highest=i;

        }
    }
    printf("\nSTUDENT WITH HIGHEST MARKS:\n");
    display(&students[highest]);
}
int main(){
    int choice;
    struct student students[100];
    int count=0;
    char filename[]="students.txt";
    int n;
    do{
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. ADD STUDENTS\n");
        printf("2. DISPLAY ALL STUDENTS\n");        
        printf("3. SEARCH STUDENT\n");
        printf("4. HIGHEST MARKS\n");
        printf("5. SAVE TO FILE\n");
        printf("6. LOAD FROM FILE\n");
        printf("7. EXIT\n");    
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);            
        getchar();
        switch(choice){
            case 1:
            printf("How many students to add: ");
            scanf("%d", &n);
            getchar();
            for(int i = 0; i < n; i++) {

                if(count>=100){
                    printf("\nMAXIMUM STUDENT LIMIT REACHED\n");
                    break;
                }
                printf("ENTER STUDENT NAME : ");
                fgets(students[count].name,sizeof(students[count].name),stdin);
                students[count].name[strcspn(students[count].name,"\n")]='\0';
                printf("ENTER STUDENT AGE : ");
                scanf("%d",&students[count].age);
                printf("ENTER STUDENT MARKS : ");
                scanf("%f",&students[count].marks);
                getchar();
                count++;}
                break;
            case 2:
                if(count==0){
                    printf("\nNO STUDENTS AVAILABLE\n");
                }
                else{
                    printf("\n===== ALL STUDENTS =====\n\n");
                    for(int i=0;i<count;i++){
                        display(&students[i]);
                    }
                }
                break;
            case 3:
                searchstudent(students,count);
                break;
            case 4:
                highestmarks(students,count);
                break;
            case 5:
                savetofile(students,count,filename);
                break;
            case 6:
                loadfromfile(students,&count,filename);
                break;
            case 7:
                printf("EXITING PROGRAM\n");
                break;
            default:
                printf("INVALID CHOICE\n");
        }
    } while(choice!=7);
    return 0;

}
