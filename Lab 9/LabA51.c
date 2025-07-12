#include<stdio.h>
#include<stdlib.h>

void main() {
   int sum = 0;

   int size;
   printf("enter size = ");
   scanf("%d",&size);

   int *ptr = (int *)malloc(size*sizeof(int));

   for(int i=0; i<size; i++) {
      printf("enter a[%d] element = ",i);
      scanf("%d",ptr+i);
      sum+=*(ptr+i);
   }
   printf("sum of element = %d",sum);
   free(ptr);
}