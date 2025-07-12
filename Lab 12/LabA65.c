#include <stdio.h>
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
void swapK(struct node **first,int *size,int k){
   struct node *save;
   save = *first;
   for(int i=1; i<k; i++) {
      save=save->link;
   }
   struct node *save2;
   save2 = *first;
   for(int i=1; i<*(size)-k+1; i++) {
      save2=save2->link;
   }
   int temp = save->info;
   save->info = save2->info;
   save2->info = temp;
   print(first);
}
void insertAtLast(struct node **first, int data,int *size)
{
   struct node *newNode = (struct node *)malloc(sizeof(struct node));
   (*size)++;
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
void main() {
   struct node *first = NULL;
   int size = 0;
   insertAtLast(&first, 18,&size);
   insertAtLast(&first, 6,&size);
   insertAtLast(&first, 10,&size);
   insertAtLast(&first, 3,&size);
   insertAtLast(&first, 1,&size);
   // gcdLl(&first);
   int k = 1;
   swapK(&first,&size,k);
}  