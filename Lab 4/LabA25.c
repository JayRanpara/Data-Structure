#include<stdio.h>

void main() {
   int arr[100];
   int idx;
   int n;
   printf("enter a index you want to delete = ");
   scanf("%d",&idx);
   printf("enter size of array = ");
   scanf("%d",&n);
   for(int i=0; i<n; i++){
      printf("enter %d element = ",i);
      scanf("%d",&arr[i]);
   }
   for(int i=idx; i<n; i++) {
      arr[i] = arr[i+1];
   }
   n--;
   for(int i = 0; i<n; i++) {
      printf("%d ",arr[i]);
   }
}