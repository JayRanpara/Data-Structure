// #include<stdio.h>

// void main() {
//    int arr[100];
//    int size;
//    printf("enter a size of array = ");
//    scanf("%d",&size);

//    printf("enter sorted element\n");
//    for(int i=0; i<size; i++) {
//       printf("enter %d element = ",i);
//       scanf("%d",&arr[i]);
//    }
//    int n;
//    printf("enter element you want to insert = ");
//    scanf("%d",&n);
//    for(int i=0; i<size-1; i++) {
//       if((n>arr[i])&&(n<arr[i+1])) {
//          arr[i+2] = arr[i+1];
//          arr[i+1] = n;
//       }
//       // if(arr[0]>n) {
//       //    arr[i+1] = arr[i];
//       //    arr[i] = n;
//       // }
//       //  if(arr[i+1]<n)   {
//       //    arr[i+2] = n;
//       // }
//    }
//    size++;

//    for(int i=0; i<size; i++) {
//       printf("%d",arr[i]);
//    }
// }
#include <stdio.h>

void main()
{
   int arr[100], size, n, pos;

   printf("Enter size of sorted array: ");
   scanf("%d", &size);

   printf("Enter sorted elements:\n");
   for (int i = 0; i < size; i++)
   {
      printf("Element %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("Enter the element to insert: ");
   scanf("%d", &n);

   pos = 0;
   while (pos < size && arr[pos] < n)
   {
      pos++;
   }
   for (int i = size; i > pos; i--)
   {
      arr[i] = arr[i - 1];
   }
   arr[pos] = n;
   size++;

   printf("Array after insertion:\n");
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
}