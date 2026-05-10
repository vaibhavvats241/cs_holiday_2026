// 1. Create a struct Student with name, age, marks
//    Create 3 students, print their details
#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    int marks;
    char name[100];
};

int main() {
    
struct student s1;
s1.roll=1234;
s1.marks=90;
strcpy(s1.name,"xyz");

printf("name : %s\n",s1.name);
printf("roll no is : %d\n",s1.roll);
printf("marks obtained : %d\n",s1.marks);

struct student s2;
s2.roll=1235;
s2.marks=98;
strcpy(s2.name,"cba");

printf("\nname : %s\n",s2.name);
printf("roll no is : %d\n",s2.roll);
printf("marks obtained : %d\n",s2.marks);

struct student s3;
s3.roll=1236;
s3.marks=99;
strcpy(s3.name,"abc");

printf("\nname : %s\n",s3.name);
printf("roll no is : %d\n",s3.roll);
printf("marks obtained : %d\n",s3.marks);

    return 0;
}

// 2. Write a function that takes a Student struct
//    and prints their details
#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    int marks;
    char name[100];
};
void printinfo(struct student s1){
    
printf("student information\n");
printf("name : %s\n",s1.name);
printf("roll no is : %d\n",s1.roll);
printf("marks obtained : %d\n",s1.marks);
}

int main() {
    
struct student s1;
s1.roll=1234;
s1.marks=90;
strcpy(s1.name,"xyz");

printinfo(s1);

    return 0;
}

// 3. Create an array of 5 Students
//    Find the student with highest marks

#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    int marks;
    char name[100];
};
void printinfo(struct student s){
    
printf("student with highest marks\n");
printf("name : %s\n",s.name);
printf("roll no is : %d\n",s.roll);
printf("marks obtained : %d\n",s.marks);
}

int main() {
    
struct student s[5]={
{1234,95,"abc"},
{1235,94,"bcd"},
{1236,98,"cde"},
{1237,92,"def"},
{1238,96,"efg"}
};

int highestmarks=0;
for(int i=1;i<5;i++){
    if(s[i].marks>s[highestmarks].marks){
        highestmarks=i;
    }
}
printinfo(s[highestmarks]);

    return 0;
}
