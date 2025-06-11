#include<stdio.h>

void main() {
   int days,week=0,year=0;
   printf("enter days = ");
   scanf("%d",&days);
   
   while(days>=7) {
      if(days>=365) {
         year++;
         days-=365;
      }
      else if(days>=7) {
         week++;
         days-=7;
      }
   }
   printf("%d:%d:%d",year,week,days);
}