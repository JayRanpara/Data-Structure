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
      return;
   }
   struct node *save = *first;
   while (save->link != NULL)
   {
      save = save->link;
   }
   save->link = newNode;
}
void deleteAtEnd(struct node **first){
    if(*first==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node *pre=*first;
    struct node *save;
    save=(*first) -> link;
    while (save ->link != NULL)
    {
        pre=save;
        save=save->link;
    }
    pre->link=NULL;
    printf("pop = %d",save->info);
    free(save);
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

void main()
{
   struct node *first = NULL;
   insertAtLast(&first, 1);
   insertAtLast(&first, 2);
   insertAtLast(&first, 3);
   insertAtLast(&first, 4);
   insertAtLast(&first, 5);
   print(&first);
   deleteAtEnd(&first);
   print(&first);
}
