#include<stdio.h>

int search(int arr[], int element, int size) {

   for(int i=0;  i<size; i++) {
      if(arr[i] == element) {
         return i;
      }
   }
   return -1;
}
void main() {
   int arr[] = {1,2,3,4,8,5,6};
   int size = sizeof(arr)/sizeof(arr[0]);
   printf("element find at index = %d",search(arr,3, size));
}