#include<stdio.h>
#include<stdlib.h>
struct node
{
   int info;
   struct node *link;
};
void insertAtFirst(struct node **first,int data) {
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->info = data;
   if(*first==NULL) {
      *first = newNode;
      newNode->link = *first;
      return;
   }
   struct node *save = *first;
   while(save->link!=*first) {
      save = save->link;
   }
   newNode->link =  *first;
   save->link = newNode;
   *first = newNode;
}
void insertAtLast(struct node **first, int data)
{
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->info = data;
   newNode->link = NULL;
   if (*first == NULL)
   {
      *first = newNode;
      newNode->link = *first;
      return;
   }
   struct node *save = *first;
   while (save->link != *first)
   {
      save = save->link;
   }
   save->link = newNode;
   newNode->link = *first;
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
   // while (save->link != first)
   // {
   //    printf("%d\n", save->info);
   //    save = save->link;
   // }
   do{
      printf("%d",save->info);
      save = save->link;
   }
   while(save!=*first);
}
void main() {
   struct node *first = NULL;
   insertAtLast(&first, 18);
   insertAtLast(&first, 6);
   insertAtLast(&first, 10);
   insertAtLast(&first, 3);
   insertAtFirst(&first,15);
   print(&first);
}