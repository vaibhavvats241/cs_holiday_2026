//1.Swap two numbers using pointers
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
//2. Double a value using pointer in a function
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
//3. Print array elements using pointer arithmetic
#include <stdio.h>
int main() {
int arr[5]={1,2,3,4,5};

for(int i=0;i<5;i++){
    printf("%d ",*(arr+i));
}
    return 0;
}
//4. Find largest element in array
#include <stdio.h>
int largestno(int a[],int len){
    int largest=a[0];
    for(int i=1;i<len;i++){
        if(a[i]>largest)
        largest=a[i];
    }
    return largest;
}
int main() {
    int arr[5]={1,2,3,9,5};
    int result=largestno(arr,5);
    printf("largest no is : %d\n",result);
    return 0;
}
//5. Factorial using recursion
#include <stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
return n*factorial(n-1);
}
int main() {
int a;
   printf("enter no : ");
   scanf("%d",&a);
   int result=factorial(a);
   printf("%d",result);
    return 0;
}
//6. Fibonacci using recursion
#include <stdio.h>
int fib(int n){
    if(n<=1){
    return n;
    }   
    return fib(n-1)+fib(n-2);
}
int main() {
int a;
printf("enter no:");
scanf("%d",&a);

printf("%d",fib(a));

    return 0;
}
//7. Sum of digits using recursion
#include <stdio.h>
int sumofdigits(int n){
    if(n==0){
    return 0;
        }
    return (n%10)+sumofdigits(n/10);
}
int main() {
int a=123;
printf("%d",sumofdigits(a));

    return 0;
