#include<stdio.h>

void main() {
   int n = 5;

   int k=1;
   for(int i=1; i<=5; i++) {
      for(int j=1; j<=i; j++) {
         printf("%d ",k++);
      }
      printf("\n");
   }
}