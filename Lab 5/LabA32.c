#include<stdio.h>

void main() {
   int arr1[3][2];
   int arr2[2][3];

   for(int i=0; i<3; i++) {
      for(int j=0; j<2; j++) {
         printf("enter arr1[%d][%d] element = ",i,j);
         scanf("%d",&arr1[i][j]);
      }
   }

   for(int i=0; i<2; i++) {
      for(int j=0; j<3; j++) {
         printf("enter arr2[%d][%d] element = ",i,j);
         scanf("%d",&arr2[i][j]);
      }
   }

   int c[3][3];
   for(int i=0; i<3; i++) {
      for(int j=0; j<3; j++) {
         c[i][j] = 0;
         for(int k = 0; k<2; k++) {
            c[i][j]+=arr1[i][k]*arr2[k][j];
         }
      }
   }
   for(int i=0; i<3; i++) {
      for(int j=0; j<3; j++) {
         printf("%d ",c[i][j]);
      }
      printf("\n");
   }
}