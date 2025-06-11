#include<stdio.h>

void main() {
   int n = 5;

   for(int i=5; i>=1; i--) {
      for(int j=1; j<=n-i; j++) {
         printf(" ");
      }
      for(int j=1; j<=i; j++) {
         printf("* ");
      }
      printf("\n");
   }
}
