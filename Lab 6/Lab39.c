#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100

struct interval{
   int start;
   int end;
};

void sort(int arr[]) {

}
void main() {
   struct interval *invervals[MAX];
   int n;
   printf("enter no of array you want to enter = ");
   scanf("%d",&n);

   while(n!=0) {
      struct interval *newEntry = (struct interval *)malloc(sizeof(struct interval));
      printf("enter start =");
      int st;
      int end;
      scanf("%d",&st);
      printf("enter start =");
      scanf("%d",&end);

      newEntry->start = st;
      newEntry->end = end; 

      n--;
   }
   
}