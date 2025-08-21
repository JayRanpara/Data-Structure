#include<stdio.h>

int binarySearch(int arr[], int st, int end, int element) {
   if(st>end) {
      return -1;
   }
   int mid = st+(end-st)/2;

   if(arr[mid] == element) {
      return mid;
   }
   else if(arr[mid]>element) {
      end = mid-1;
   } 
   else {
      st = mid+1;
   }  
}
void main() {
   int arr[] = {1,22,45,89,99};
   int size = sizeof(arr)/sizeof(arr[0]);

   printf("element find at index = %d",binarySearch(arr,0,size-1,89));
}