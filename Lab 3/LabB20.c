#include<stdio.h>

void main() {
   int n;
   printf("enter size of array = ");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++) {
      printf("enter %d index element = ",i);
      scanf("%d",&a[i]);
   }
   int count = 0;
   for(int i=0; i<n; i++) {
      for(int j=i+1; j<n; j++) {
         if(a[i]==a[j]) {
            count++;
            break;
         }
      }
   }
   if(count != 0){
      printf("The array contains a duplicate number");
   }
   else {
      printf("The array not contains a duplicate number");
   }
}