// 1. Function that takes two integers, returns their sum
#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main() {
   int a=5,b=6;
   int result = sum(a,b);
   printf("%d",result);
    return 0;
}
// 2. Function that takes an integer, returns its square
#include <stdio.h>
int square(int a){
    return a*a;
}
int main() {
   int a=5;
   int result = square(a);
   printf("%d",result);
    return 0;
}
// 3. Function that takes an array and length, 
//    returns the sum of all elements
#include <stdio.h>
int sumofarray(int a[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=a[i];
    }return sum;
}
int main() {
   int arr[5]={1,2,2,3,4};
   
   int result = sumofarray(arr,5) ;
   printf("%d",result);
    return 0;
}
// 4. Function that takes two integers by pointer,
//    swaps them (no return value needed)
#include <stdio.h>
int swap(int *p,int *q){
   int temp;
   temp=*p;
   *p=*q;
   *q=temp;
}
int main() {
int a=10,b=9;
   int result = swap(&a,&b) ;
   printf("%d,%d",a,b);
    return 0;
}
