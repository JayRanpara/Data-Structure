#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
   int size;
   printf("enter length = ");
   scanf(" %d ",&size);

   char *ptr= (char *)malloc(size*sizeof(char));
      printf("enter string = ");
      scanf("%s",ptr);

   int *start = ptr;
   int *end = ptr+(strlen(ptr))-1;
   int flag = 0;
   while(start<end) {
      if(*start!=*end) {
         flag = 0;
         break;
      }
      flag++;
      start++;
      end--;
   }
   if(flag == 0) {
      printf("not palindrome");
   }
   else {
      printf("palindrome");
   }
   free(ptr);
} 