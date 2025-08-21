#include<stdio.h>
#include<stdlib.h>

void main() {
   int arr[] = {12,45,1,2,6,98};
   int size = sizeof(arr)/sizeof(arr[0]);
   int i=1;
   while(i<size) {
      int key = arr[i];
      int j = i-1;
      while(j>=0 && arr[j]>key) {
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = key;
      i++;
   }
   for(int i=0; i<size; i++) {
      printf("%d ",arr[i]);
   }
}