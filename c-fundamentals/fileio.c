// 1. Write 5 student names to a file
//    Read them back and print on screen
#include <stdio.h>

int main() {

    FILE *fp;
    char name[50];
    int i;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Cannot create file\n");
        return 1;
    }

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++) {
        scanf("%s", name);
        fprintf(fp, "%s\n", name);
    }

    fclose(fp);

    // Read file
    fp = fopen("students.txt", "r");

    printf("\nData from file:\n");

    while(fscanf(fp, "%s", name) != EOF) {
        printf("%s\n", name);
    }

    fclose(fp);

    return 0;
}
// 2. Append a new name to existing file
//    Print all names including new one
#include <stdio.h>
int main() {

    FILE *fp;
    char name[50];
    int i;

    fp = fopen("students.txt","a");
    if(fp==NULL){
        printf("file not found");
        return 1;
    }
printf("enter new name : \n");
scanf(" %[^\n]",name);

fprintf(fp,"%s\n",name);
fclose(fp);

fp = fopen("students.txt","r");
printf("data from file");

if(fp==NULL){
    printf("file not found");
    return 1;
}

printf("\n ALL NAME\n");
while(fgets(name,sizeof(name),fp)!=NULL){
    printf("%s",name);
}
fclose(fp);
return 0;

}
// 3. Write a Student struct to a file
//    (name, age, marks)
//    Read it back and print details
#include<stdio.h>
struct student{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct student s1;
    printf("enter name,age and marks of student\n");
    scanf("%s %d %f",s1.name,&s1.age,&s1.marks);
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp==NULL){
        printf("file not found");
        return 1;       
    }
    fprintf(fp,"%s %d %f",s1.name,s1.age,s1.marks);
    fclose(fp);
    struct student s2;
    fp=fopen("student.txt","r");
    if(fp==NULL){
        printf("file not found");
        return 1;
    }

fscanf(fp,"%s %d %f",s2.name,&s2.age,&s2.marks);
printf("name: %s\nage: %d\nmarks: %.2f\n",s2.name,s2.age,s2.marks);
fclose(fp);

printf("\nall data from file\n");
printf("name: %s\nage: %d\nmarks: %.2f\n",s2.name,s2.age,s2.marks);
return 0;

    
}
