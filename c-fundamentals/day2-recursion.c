// 1. Factorial of n
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
// 2. Fibonacci of n
//    fib(1) = 1, fib(2) = 1
//    fib(n) = fib(n-1) + fib(n-2)
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
// 3. Sum of digits of a number
//    sumDigits(123) = 1 + 2 + 3 = 6
//    Hint: last digit = n % 10
//          remaining digits = n / 10
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
