#include<stdio.h>

void main() {
   int n;
   printf("enter size of array = ");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++) {
      printf("enter %d index element = ",i);
      scanf("%d",&a[i]);
   }
   for(int i=0; i<n; i++) {
      printf("%d ",a[i]);
   }
}