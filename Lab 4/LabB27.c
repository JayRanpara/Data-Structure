#include<stdio.h>
void main() {
int arr[100], size, n, pos;
   printf("Enter size of sorted array: ");
   scanf("%d", &size);
   printf("Enter sorted elements:\n");
   for (int i = 0; i < size; i++) {
      printf("Element %d: ", i);
      scanf("%d", &arr[i]);
   }
   printf("Enter the element to delete: ");
   scanf("%d", &n);

   pos = 0;
    while (pos < size && arr[pos] < n) {
      pos++;
   }
  for(int i=pos; i<size; i++) {
      arr[i] = arr[i+1];
   }
   size--;
   for(int i=0; i<size; i++) {
      printf("%d",arr[i]);
   }
}