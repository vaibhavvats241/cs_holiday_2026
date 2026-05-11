// 1. Take a 3x3 matrix as input from user
//    Print it in matrix format
#include <stdio.h>

int main() {
  int a[3][3];
  printf("enter element in array : ");
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          scanf("%d",&a[i][j]);
      }
  }
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          printf("%d ",a[i][j]);
          }
       printf("\n");
   }

    return 0;
}
// 2. Add two 3x3 matrices
//    Print the result
#include <stdio.h>

int main() {
  int a[3][3]={{1,2,3},{4,6,5},{7,8,9}};
  int b[3][3]={{3,2,1},{4,5,3},{6,7,9}};
int sum[3][3] = {0};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum[i][j]+=a[i][j]+b[i][j]; }}
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",sum[i][j]);}
        printf("\n");}
    return 0;
}
// 3. Find the largest element in a 2D array
#include <stdio.h>

int main() {
  int a[3][3]={{1,2,3},{4,6,9},{7,8,3}};
int largest=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]>largest){
        largest=a[i][j];
        }
    }
}
printf("%d",largest);
    return 0;
}
// 4. Print the diagonal elements of a 3x3 matrix
//    Diagonal means arr[0][0], arr[1][1], arr[2][2]
#include <stdio.h>

int main() {
  int a[3][3]={{1,2,3},{4,6,9},{7,8,3}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){
            printf("%d",a[i][j]);
        }
    }
}
    return 0;
}
