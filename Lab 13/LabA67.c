#include <stdio.h>
#include<stdlib.h>
struct node
{
   int info;
   struct node *link;
};
int gcd(int a, int b) {
   while(b!=0) {
      int temp = b;
      b = a%b;
      a = temp;
   }
   return a;
}
void print(struct node **first)
{
   if (*first == NULL)
   {
      printf("Linked list is empty");
      return;
   }
   struct node *save;
   save = *first;
   while (save != NULL)
   {
      printf("%d\n", save->info);
      save = save->link;
   }
}
void insertAtLast(struct node **first, int data)
{
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->info = data;
   newNode->link = NULL;
   if (*first == NULL)
   {
      *first = newNode;
      return;
   }
   struct node *save = *first;
   while (save->link != NULL)
   {
      save = save->link;
   }
   save->link = newNode;
}
void gcdLl(struct node **first) {
   struct node *save;
   save = *first;
   
   while(save->link!=NULL) {
      struct node *newNode = (struct node *)malloc(sizeof(struct node));
      newNode->info = gcd(save->info,save->link->info);
      newNode->link = save->link;
      save->link = newNode;
      save = save->link->link;  
   }
   print(first);

}
void main() {
   struct node *first = NULL;
   insertAtLast(&first, 18);
   insertAtLast(&first, 6);
   insertAtLast(&first, 10);
   insertAtLast(&first, 3);
   // insertAtLast(&first, 1);
   gcdLl(&first);
}