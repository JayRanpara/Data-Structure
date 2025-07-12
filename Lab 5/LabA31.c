#include<stdio.h>

void main() {
   int row ,col;
   printf("enter no of row = ");
   scanf("%d",&row);
    printf("enter no of column = ");
   scanf("%d",&col);
   int a[row][col];
   int b[row][col];

   printf("enter first matrix element = ");
   for(int i=0; i<row; i++) {
      for(int j=0; j<col; j++) { 
         scanf("%d",&a[i][j]);
      }
   }

   printf("enter second matrix element = ");
   for(int i=0; i<row; i++) {
      for(int j=0; j<col; j++) { 
         scanf("%d",&b[i][j]);
      }
   }
   int c[row][col];

   for(int i=0; i<row; i++) {
      for(int j=0; j<col; j++) {
         c[i][j] = a[i][j]+b[i][j];
      }
   }

   for(int i=0; i<row; i++) {
      for(int j=0; j<col; j++) {
         printf("%d ",c[i][j]);
      }
      printf("\n");
   }
}