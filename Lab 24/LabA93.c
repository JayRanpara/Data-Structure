// #include<stdio.h>

// void merge(int arr[], int si, int mid, int ei) {
//    int merge[ei-si+1];

//    int idx1 = si;
//    int idx2 = mid+1;
//    int x=0;

//    while(idx1<=mid && idx2<=ei) {
//       if(arr[idx1]<=arr[idx2]) {
//          merge[x++] = arr[idx1++];
//       } 
//       else {
//          merge[x++] = arr[idx2++];
//       }
//    }

//    while(idx1<=mid) {
//       merge[x++] = arr[idx1++];
//    }

//    while(idx2<=ei) {
//       merge[x++] = arr[idx2++];
//    }

//    for (int i = 0; i < (ei-si+1); i++) {
//       arr[si + i] = merge[i];
//    }
// }

// void divide(int arr[],int si, int ei) {
//    if(ei<=si) {
//       return;
//    }
//    int mid = si+(ei-si)/2;
//    divide(arr,si,mid);
//    divide(arr,mid+1,ei);
//    merge(arr,si,mid,ei);
// }

// void main() {
//    int arr[] = {12,45,1,2,6,98};
//    int size = sizeof(arr)/sizeof(arr[0]);

//    divide(arr,0,size-1);

//    printf("Sorted array: ");
//    for (int i = 0; i < size; i++) {
//       printf("%d ", arr[i]);
//    }
// }

#include<stdio.h>

void merge(int arr[], int si, int mid, int ei) {
   int merge[ei-si+1];
   int idx1 = si;
   int idx2 = mid+1;
   int x = 0;

   while(idx1<=mid && idx2<=ei) {
      if(arr[idx1]<=arr[idx2]) {
         merge[x++] = arr[idx1++];
      }
      else {
         merge[x++] = arr[idx2++];
      }
   }  
   while(idx1<=mid) {
      merge[x++] = arr[idx1++];
   }
   while(idx2<=ei) {
      merge[x++] = arr[idx2++];
   }

   for(int i=0; i<(ei-si+1); i++) {
      arr[si+i] = merge[i];
   }
}
void divide(int arr[], int si, int ei) {
   if(si>=ei) {
      return;
   }
   int mid = si+(ei-si)/2;
   divide(arr,si,mid);
   divide(arr,mid+1,ei);
   merge(arr,si,mid,ei);
}
void main() {
   int arr[] = {12,45,1,2,6,98};
   int size = sizeof(arr)/sizeof(arr[0]);

   divide(arr,0,size-1);
   for(int i=0; i<size; i++) {
      printf("%d ",arr[i]);
   }
}