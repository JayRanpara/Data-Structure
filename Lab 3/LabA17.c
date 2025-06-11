#include<stdio.h>

void main() {
   int p;
   printf("enter size of array = ");
   scanf("%d",&p);
   int a[p];

   for(int i=0; i<p; i++) {
      printf("enter %d index element = ",i);
      scanf("%d",&a[i]);
   }
   int n,m;
   printf("enter starting index = ");
   scanf("%d",&n);

   printf("enter ending index = ");
   scanf("%d",&m);

   int sum = 0;
   for(int i=n; i<=m; i++) {
      sum+=a[i];
   }
   printf("sum = %d",sum);
}