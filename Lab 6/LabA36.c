#include <stdio.h>
#include <string.h>

#define MAX 100

int isAiBi(char str[])
{
   char stack[MAX];
   int top = -1;
   int i = 0;

   while (str[i] != '\0')
   {
      if (str[i] == 'a')
      {

         if (top < MAX - 1)
         {
            stack[++top] = 'a';
         }
         else
         {
            return 0;
         }
      }
      else if (str[i] == 'b')
      {

         if (top >= 0)
         {
            top--;
         }
         else
         {
            return 0;
         }
      }
      else
      {
         return 0;
      }
      i++;
   }

   return (top == -1 && i > 0);
}

int main()
{
   char input[MAX];
   printf("Enter the string: ");
   scanf("%s", input);

   if (isAiBi(input))
      printf(" The string is of the form aibi.\n");
   else
      printf(" The string does NOT follow the aibi pattern.\n");

   return 0;
}