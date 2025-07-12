#include<stdio.h>
#include<stdlib.h>

void main() {
   int size;
   printf("enter size = ");
   scanf("%d",&size);

   int *ptr = (int *)malloc(size*sizeof(int));

   for(int i=0; i<size; i++) {
      printf("enter a[%d] element = ",i);
      scanf("%d",ptr+i);
   }
   int max  = *ptr;

   for(int i=1; i<size; i++) {
      if(max<*(ptr+i)) {
         max = *(ptr+i);
      }
   }
   printf("Maximum number in this array = %d",max);
}