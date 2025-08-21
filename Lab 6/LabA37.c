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
      if (str[i] == '('||str[i] == '['||str[i] == '{')
      {

         if (top < MAX - 1)
         {
            stack[++top] = str[i];
         }
         else
         {
            return 0;
         }
      }
      
      else
      {
         if(top == -1) {
            return 0;
         }
         if(str[i] == ')'&&stack[top]=='('||str[i] == ']'&&stack[top]=='['||str[i] == '}'&&stack[top]=='{') {
            top = top-1;
         }
      }  
      i++;
   }
   if(top == -1) {
      return 1;
   }
   else {
      return 0;
   }  
}

int main()
{
   char input[MAX];
   printf("Enter the string: ");
   scanf("%s", input);

   if(isAiBi(input) == 1) {
      printf("valid parantheses");
   }
   else {
      printf("invalid parantheses");
   }
}