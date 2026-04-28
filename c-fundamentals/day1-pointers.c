// Declare an integer x = 10
// Declare a pointer to x
// Print x normally
// Print x using the pointer
// Change x to 20 using the pointer
// Print x again
#include <stdio.h>
int main() {
int x=10;
int *p=&x;
printf("%d\n",x);
printf("%d\n",*p);
*p=20;
printf("%d",x);
    return 0;
}
// Write a function that takes an integer pointer
// The function should double the value at that address
// Call it from main and print before and after
#include <stdio.h>
int dblvalue(int *ptr){
    *ptr=(*ptr)*2;
}
int main() {
int x=10;
printf("number before = %d\n",x);
dblvalue(&x);
printf("number after = %d",x);
    return 0;
}
// Declare two integers a = 5, b = 9
// Write a swap function using pointers
// Swap them and print before and after
#include <stdio.h>
int swap(int *p,int *q){
   int temp;
   temp=*p;
   *p=*q;
   *q=temp;
}
int main() {
int a=10,b=9;
printf("no before swaping = %d and %d \n",a,b);
swap(&a,&b);
printf("no after swapping = %d and %d",a,b);
    return 0;
}
