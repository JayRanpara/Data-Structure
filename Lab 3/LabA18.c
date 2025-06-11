#include<stdio.h>

void main() {
   int n;
   float avg;
   printf("enter size of array = ");
   scanf("%d",&n);
   int sum = 0;
   int a[n];
   for(int i=0; i<n; i++) {
      printf("enter %d index element = ",i);
      scanf("%d",&a[i]);
      sum+=a[i];
   }
   avg = (float)sum/n;
   printf("%f",avg);
}