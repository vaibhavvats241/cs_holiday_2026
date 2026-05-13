// 1. Dynamically allocate array of n integers
//    Take n from user at runtime
//    Fill it with values, print it, free it
#include <stdio.h>
#include<stdlib.h>
int main() {
int *ptr;
int n;
printf("enter n : \n");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
if(ptr==NULL){
    printf("invalid\n");
    return 1;
}
printf("enter nos :\n");
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++){
printf("%d",ptr[i]);}

free(ptr);
    return 0;
}
// 2. Dynamically allocate a Student struct
//    Fill its members, print them, free it
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[100];
    int roll;
    float marks;
};
int main() {
 struct student *s=(struct student *)malloc(sizeof(struct student));
 if(s == NULL){
      printf("Memory allocation failed!\n");
      return 1;
 }
printf("enter student name : \n");
fgets(s->name,sizeof(s->name),stdin);
printf("enter student roll : \n");
scanf("%d",&s->roll);
printf("enter marks : \n");
scanf("%f",&s->marks);

free(s);

printf("\nStudent Information\n");
printf("Name  : %s", s->name);
printf("Roll  : %d\n", s->roll);
printf("Marks : %.2f\n", s->marks);


    return 0;
}
// 3. Dynamically allocate array of n Students
//    Take n from user, fill details, print all, free
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[100];
    int roll;
    float marks;
};
int main() {
    int n;
    printf("enter no of students : \n");
    scanf("%d",&n);
  struct student *s=(struct student *)malloc(n*sizeof(struct student));
  if(s==NULL){
      printf("invalid\n");
      return 1;
  }
  getchar();
  for(int i=0;i<n;i++){
      printf("enter name :\n");
      fgets(s[i].name,n*sizeof(s[i].name),stdin);
      s[i].name[strcspn(s[i].name,"\n")]='\0';
      printf("enter roll no :\n");
      scanf("%d",&s[i].roll);
      printf("enter marks :\n");
      scanf("%f",&s[i].marks);
      printf("\n");
      getchar();
  }
for(int i=0;i<n;i++){
    printf("\nStudent Information\n");
    printf("student %d\n",i+1);
    printf("Name  : %s\n", s[i].name);
    printf("Roll  : %d\n", s[i].roll);
    printf("Marks : %.2f\n", s[i].marks);
}
free(s);
    return 0;
}
