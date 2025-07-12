#include<stdio.h>
#include<stdlib.h>


void sort(int *ptr,int size) {
   for(int i=0; i<size; i++) {
      for(int j = 0; j<size-i-1; j++) {
         if(*(ptr+j)>*(ptr+j+1)) {
            int temp = *(ptr+j);
            *(ptr+j) = *(ptr+j+1);
            *(ptr+j+1) = temp;
         }
      }
   }
}
void main() {
   int size;
   printf("enter size = ");
   scanf("%d",&size);

   int *ptr = (int *)malloc(size*sizeof(int));
   for(int i=0; i<size; i++) {
      printf("enter a[%d] element = ",i);
      scanf("%d",ptr+i);
   }
   sort(ptr,size);

   for(int i=0; i<size; i++) {
      printf("%d ",*(ptr+i));
   }
   free(ptr);
}