#include <stdio.h>
#include <stdlib.h>
struct node
{
   int info;
   struct node *link;
};
struct node *first = NULL;
struct node *first2 = NULL;
void insertAtEnd(int x)
{
   
   struct node *newnode;
   newnode = (struct node *)malloc(sizeof(struct node));
   newnode->info = x;
   newnode->link = NULL;
   if (first == NULL)
   {
      first = newnode;
      return;
   }
   struct node *save;
   save = first;
   while (save->link != NULL)
   {
      save = save->link;
   }

   save->link = newnode;
}
void display()
{
   if (first == NULL)
   {
      printf("Linked list is empty");
      return;
   }
   struct node *save;
   save = first;
   while (save != NULL)
   {
      printf("%d\n", save->info);
      save = save->link;
   }
}

void removeDuplicate(struct node **first) {
   struct node *current = *first;
   while (current != NULL && current->link != NULL) {
      struct node *prev = current;
      struct node *temp = current->link;
      while (temp != NULL) {
         if (current->info == temp->info) {
            prev->link = temp->link;
            free(temp); 
            temp = prev->link;
         } else {
            prev = temp;
            temp = temp->link;
         }
      }
      current = current->link;
   }
}



void main()
{
   insertAtEnd(1);
   insertAtEnd(13);
   insertAtEnd(6);
   insertAtEnd(1);
   insertAtEnd(17);
   insertAtEnd(13);
   insertAtEnd(17);
   insertAtEnd(27);


   display();
   printf("********\n");
   removeDuplicate(&first);
   display();

}