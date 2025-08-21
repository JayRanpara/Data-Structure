#include<stdio.h>
#define size 5

int stack[size];
int top = -1;

void push() {
   int data;
   printf("enter data = ");
   scanf("%d",&data);
   if(top>=size-1) {
      printf("stack overflow");
      return;
   }
   stack[++top] = data;
}

void pop() {
   if(top<=-1) {
      printf("stack underflow");
      return;
   }
   top = top-1;
   printf("%d",stack[top+1]);
}

void display() {
   int i = top;
   while(i>-1) {
      printf("%d",stack[i--]);
   }
}

void peep() {
   int k;
   printf("enter position = ");
   scanf("%d",&k);
   int idx = top-k+1;
   printf("%d",stack[idx]); 
}

void change() {
   int k;
   printf("enter position = ");
   scanf("%d",&k);
   int data;
   printf("enter data = ");
   scanf("%d",&data);
   int idx = top-k+1;
   stack[idx] = data;
}
void main() {
   while(1) {
      int n;
      printf("enter choice\n1 for push element\n2 for pop element\n3 for display \n4 for peep \n5 for change\n");
      scanf("%d",&n);
      switch (n)
      {
      case 1:
         push();
         break;
      case 2:
         pop();
         break;
      case 3:
         display();
         break;
      case 4:
         peep();
         break;
      case 5:
         change();
         break;
      default:
         break;
      }
       
   }
}