#include <stdio.h>
#include <stdlib.h>

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
void copyLinkedList(struct node **first)
{
   struct node *save = *first;
   struct node *begin = (struct node *)malloc(sizeof(struct node));
   begin->info = save->info;
   struct node *pre;
   pre = begin;

   while(save->link!=NULL) {
      struct node *newNode = (struct node *)malloc(sizeof(struct node));
      newNode->info = save->link->info;
      pre->link = newNode;
      pre = pre->link;
      save = save->link;
   }
   pre->link = NULL;
   printf("copy linkedlist\n");
   print(&begin);
}
void main()
{
   struct node *first = NULL;
   insertAtLast(&first, 1);
   insertAtLast(&first, 2);
   insertAtLast(&first, 3);
   insertAtLast(&first, 4);
   insertAtLast(&first, 5);
   print(&first);
   copyLinkedList(&first);
}