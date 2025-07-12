#include<stdio.h>
#include<stdlib.h>
void main() {
   
   int *ptr = (int *)malloc(1*sizeof(int));
   char *ptr1 = (char *)calloc(1,sizeof(char));
   float *ptr2 = (float *)calloc(1,sizeof(float));
   if(ptr&&ptr1&&ptr2) {
      *ptr = 9;
      printf("%d\n",*ptr);
      *ptr1 = 'a';
      printf("%c\n",*ptr1);
      *ptr2 = 20.55;
      printf("%f\n",*ptr2);

      free(ptr);
      free(ptr1);
      free(ptr2);
   }
}