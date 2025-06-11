#include<stdio.h>

void main() {
   int year;
   printf("enter year = ");
   scanf("%d",&year);
   if((year%4==0&&year%100!=0)||year%400 == 0) {
      printf("entered year leap year");
   }
   else {
      printf("entered year not leap year");
   }
}