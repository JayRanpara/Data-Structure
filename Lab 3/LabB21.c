#include<stdio.h>

void main() {
   int n,p,q;
   printf("enter size of array = ");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++) {
      printf("enter %d index element = ",i);
      scanf("%d",&a[i]);
   }
   printf("enter first number in array you want to replace= ");
   scanf("%d",&p);

   printf("enter second number  = ");
   scanf("%d",&q);
   int indOp=0;
   
   for(int i=0; i<n; i++) {
      if(p == a[i]) {
         indOp = i;
      }
   }
   
   a[indOp] = q;
   printf("the index of replace element = %d\n",indOp);

   for(int i=0; i<n; i++) {
      printf("%d",a[i]);
   }
}