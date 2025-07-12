#include<stdio.h>
#include<stdlib.h>
struct node
{
   int info;
   struct node *link;
};
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
void sort(struct node **first) {
   struct node *i,*j;
   int temp;

   for(i=(*first); i != NULL; i= i->link) {
      for(j = *first; j->link!= NULL; j = j->link) {
         if(j->info>j->link->info) {
            temp = j->info;
            j->info = j->link->info;
            j->link->info = temp;
         }
      }
   }
   print(first);
}
void main() {
   struct node *first = NULL;
   insertAtLast(&first, 5);
   insertAtLast(&first, 2);
   insertAtLast(&first, 4);
   insertAtLast(&first, 3);
   insertAtLast(&first, 1);
   sort(&first);
}