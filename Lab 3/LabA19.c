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
   int min = a[0];
   int max = a[0];

   for(int i = 0; i<n; i++) {
      if(a[i]>max) {
         max = i;
      }
      if(a[i]<min) {
         min = i;
      }
   }
   printf("minimum index = %d \n",min);
   printf("minimum element = %d \n",a[min]);

   printf("maximum index = %d ",max);
   printf("maximum element = %d ",a[max]);
}