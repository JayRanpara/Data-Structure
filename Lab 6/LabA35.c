#include<stdio.h>
#include<string.h>
#define MAX 100

char arr[MAX];
int top = -1;

void push(char ch) {
   if(top<MAX-1) {
      arr[++top] = ch;
   }
}

char pop() {
   if(top>=0) {
      return arr[top--];
   }
   return '\0';
}
int isPalindrome(char str[]) {
   int len = strlen(str);
   top = -1;

   for(int i=0; i<len; i++) {
      push(str[i]);
   }

   for(int i=0; i<len; i++) {
      if(str[i]!=pop()) {
         return 0;
      }
   }
   return 1;
}
void main() {
   char str[] = "abcba";
   if(isPalindrome(str)) {
      printf("palindrome");
   } else{
      printf("not palindrome");
   }
}