// 1. Create a Student struct, access all members using pointer
#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    float marks;
    char name[100];
};
int main() {
  struct student s1={1234,99.5,"vaibhav"};
  struct student *ptr=&s1;
  
  printf("student details\n\n");
  printf("student name : %s\n",ptr->name);
  printf("student roll no : %d\n",ptr->roll);
  printf("student marks : %.1f ",ptr->marks);
    return 0;
}
// 2. Write a function that takes a Student pointer
//    and prints all details using arrow operator
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float marks;
    char name[100];
};
void printinfo(struct student s1){
     struct student *ptr=&s1;
  
      printf("student details\n\n");
  printf("student name : %s\n",ptr->name);
  printf("student roll no : %d\n",ptr->roll);
  printf("student marks : %.1f ",ptr->marks);
}
int main() {
  struct student s1={1234,99.5,"vaibhav"};
  struct student *ptr=&s1;
  printinfo(s1);

    return 0;
}
// 3. Create array of 3 Students
//    Pass it to a function using pointer
//    Print all students inside the function

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float marks;
    char name[100];
};
void printinfo(struct student *ptr,int size){
    
  
      printf("student details \n\n");
      for(int i=0;i<size;i++){
          printf("student %d\n",i+1);
      
  printf("student name : %s\n",(ptr+i)->name);
  printf("student roll no : %d\n",(ptr+i)->roll);
  printf("student marks : %.1f\n\n ",(ptr+i)->marks);
}}
int main() {
  struct student s[3]={ {101,89.5,"abc"},
                        {102,78.0,"cba"},
                        {103,91.2,"bgf"}};
        
  
  printinfo(s,3);

    return 0;
}
