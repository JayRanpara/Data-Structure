#include<stdio.h>

void main() {
   int arr[100];
   int idx;
   int data;
   int n;
   printf("enter idx of element = ");
   scanf("%d",&idx);
   printf("enter element = ");
   scanf("%d",&data);
   printf("enter size of array = ");
   scanf("%d",&n);
   for(int i=0; i<n; i++){
      printf("enter %d element = ",i);
      scanf("%d",&arr[i]);
   }
   for(int i=n+1; i>=idx; i--) {
      arr[i] = arr[i-1];
   }
   arr[idx] = data;
   
   for(int i=0; i<n+1; i++) {
      printf("%d ",arr[i]);
   }
}