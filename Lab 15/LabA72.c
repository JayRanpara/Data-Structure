#include<stdio.h>
#include<stdlib.h>

struct node
{
   int info;
   struct node *link;
   struct node *prev;
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
void addfirst(struct node **first,int data) {
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   newNode->info = data;
  
   if(*first == NULL) {
      newNode->link = NULL;
      newNode->prev = NULL;
      *first = newNode;
      return;
   }
   newNode->link = *first;
   (*first)->prev = newNode;
   newNode->prev = NULL;
   *first = newNode;
}
void deleteSpe(struct node **first) {
   
}
void main() {
   struct node *first = NULL;
   addfirst(&first,1);
   addfirst(&first,2);
   addfirst(&first,3);
   addfirst(&first,4);
   addfirst(&first,5);
   print(&first);

}