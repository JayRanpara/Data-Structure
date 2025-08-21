
#include <stdio.h>
#include <string.h>

#define MAX 100

void isAiBi(char str[])
{
   char stack[MAX];
   int top = -1;
   int i = 0;

   while (str[i] != '\0')
   {
      if (str[i]!='*')
      {

         if (top < MAX - 1)
         {
            stack[++top] = str[i];
         } 
         else {
            return;
         }
      }
      
      else
      {
        if(top>=0) {
         top--;
        }
      } 
      i++; 
   }
   for (int i = 0; i <= top; i++) {
    printf("%c", stack[i]);
   }
}

int main()
{
   char input[MAX];
   printf("Enter the string: ");
   scanf("%s", input);

   isAiBi(input);
}