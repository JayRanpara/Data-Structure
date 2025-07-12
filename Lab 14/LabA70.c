#include<stdio.h>
#include<stdlib.h>

struct node
{
   int info;
   struct node *link;
};
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
void circularList(struct node **first) {
   struct node *slow = *first;
   struct node *fast = *first;

   while(fast->link != *first && fast->link->link != *first) {
      slow = slow->link;
      fast = fast->link->link;
   }

   
   struct node *head1 = (struct node *)malloc(sizeof(struct node));
   struct node *head2 = (struct node *)malloc(sizeof(struct node));
   head1 = *first;
   head2 = slow->link;
   slow->link = head1;
   fast->link = head2;

   print(&head1);
   printf("\n");
   printf("*******\n");
   print(&head2);
}
void main() {
   struct node *first = NULL;
   insertAtLast(&first, 18);
   insertAtLast(&first, 6);
   insertAtLast(&first, 10);
   insertAtLast(&first, 3);
   insertAtLast(&first,15);
   insertAtLast(&first,15);
   // print(&first);
   circularList(&first);
}