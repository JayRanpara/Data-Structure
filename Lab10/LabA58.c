#include <stdio.h>
#include <stdlib.h>

struct node
{
   int info;
   struct node *link;
};
struct node *first1 = NULL;
struct node *first2 = NULL;
void insertAtEnd(struct node** first ,int x)
{
   struct node *newnode;
   newnode = (struct node *)malloc(sizeof(struct node));
   newnode->info = x;
   newnode->link = NULL;
   if (*first == NULL)
   {
      // printf("Fisrt NULL\n");
      *first = newnode;
      // printf("%d dfghj",first1->info);
      return;
   }
   struct node *save;
   save = *first;
   // printf("%d dfghj",save->link);
   while (save->link != NULL)
   {
      save = save->link;
   }

   save->link = newnode;
}
int  isValid(struct node *first1, struct node *first2) {
   
   
   while(first1!=NULL&&first2!=NULL) {
      if(first1->info != first2->info) {
         return 0;
      }
      first1 = first1->link;
      first2 = first2->link;
   }

   if(first1 == NULL&&first2 ==NULL) {
      return 1;
   }

   return 0;  
}
void main()
{
   insertAtEnd(&first1,1);
   insertAtEnd(&first1,2);
   insertAtEnd(&first1,3);
   insertAtEnd(&first1,4);
   insertAtEnd(&first1,5);

   insertAtEnd(&first2,1);
   insertAtEnd(&first2,2);
   insertAtEnd(&first2,3);
   insertAtEnd(&first2,4);
   insertAtEnd(&first2,5);

   if(isValid(first1,first2)) {
      printf("linked list is same");
   }
   else {
      printf("linked list is different");
   }
}