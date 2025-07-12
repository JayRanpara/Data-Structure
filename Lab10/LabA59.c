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
void removeDuplicate(struct node ** first) {
   struct node *temp ;
   temp = *first;

   while(temp!=NULL&&temp->link != NULL) {
      if(temp->info == (temp->link)->info) {
         struct node *ptr = temp->link;
         temp->link = temp->link->link;
         free(ptr);
      }else {
         temp = temp->link;
      }
     
   }
   // temp = *first;
   // while(temp!=NULL&&temp->link != NULL) {
   //    if(temp->info == (temp->link)->info) {
   //       struct node *ptr = temp->link;
   //       temp->link = temp->link->link;
   //       // free(ptr);
   //    }
   //    temp = temp->link;
   }
// }

void main()
{
   insertAtEnd(1);
   insertAtEnd(1);
   insertAtEnd(6);
   insertAtEnd(13);
   insertAtEnd(13);
   insertAtEnd(13);
   insertAtEnd(27);
   insertAtEnd(27);


   display();
   printf("********\n");
   removeDuplicate(&first);
   display();

}