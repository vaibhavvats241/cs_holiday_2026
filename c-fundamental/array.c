// 1. Declare an array of 5 integers
//    Print each element using pointer arithmetic
//    (no arr[i] allowed — only *(arr+i))
#include <stdio.h>
int main() {
int arr[5]={1,2,3,4,5};

for(int i=0;i<5;i++){
    printf("%d ",*(arr+i));
}
    return 0;
}
//2. Write a function that takes an array and its size
//    Doubles every element in the array
//    Print before and after from main

#include <stdio.h>
int doublearr(int arr[],int len){
    for(int i=0;i<len;i++){
        arr[i]*=2;
    }
}
int main() {
int arra[5]={1,2,3,4,5};
printf("array before doubling: ");
for(int i=0;i<5;i++){
 printf("%d ",arra[i]);}
doublearr(arra,5);
printf("\narray after doubling: ");
for(int i=0;i<5;i++){
 printf("%d ",arra[i]);
}
    return 0;
}
// 3. Write a function that takes an array and its size
//    Returns the largest element
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
