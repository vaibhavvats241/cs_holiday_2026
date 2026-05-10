// 1. Take a string input from user, print it back
#include<stdio.h>

int main(){
char str[100];

printf("enter the string");
  
fgets(str,sizeof(str),stdin);
  
printf("%s",str);
return 0;
}
// 2. Find the length of a string WITHOUT using strlen()
//   Write your own length function using a loop
#include <stdio.h>

int main() {
char s[30]= "hello world";
int count=0;
while(s[count]!='\0')
count++;
printf("%d",count);

    return 0;
}
// 3. Reverse a string without using any library function
#include <stdio.h>

int main() {
    
char str[100];
int count=0;
int start,end;
char temp;

printf("Enter a string: ");
scanf("%s", str);

while(str[count]!='\0')
count++;

start=0;
end=count-1;

while(start<end){
temp=str[start];
str[start]=str[end];
str[end]=temp;
    start++;
    end--;}
    
 printf("Reversed string: %s\n", str);

    return 0;
}
// 4. Check if a string is a palindrome
//    Example: "madam" is a palindrome
#include <stdio.h>
int main() {
    char str[100];
    int count=0,ispalindrome=1;
    printf("enter the string :");
    scanf("%s",str);
    
    while(str[count] != '\0'){
    count++;}
    
    for(int i=0;i<count/2;i++){
        if(str[i]!=str[count-i-1])
        ispalindrome=0;
    }
if(ispalindrome){
    printf("palindrome");
}else
printf("not palindrome");

    return 0;
}
