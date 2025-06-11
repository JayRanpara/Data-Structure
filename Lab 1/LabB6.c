#include<stdio.h>

void main() {
   int seconds;
   int hours=0,minutes=0;
   printf("enter seconds = ");
   scanf("%d",&seconds);
   while(seconds>=60) {
      if(seconds>=3600) {
         hours++;
         seconds-=3600;
      }
      if(seconds>=60) {
         minutes++;
         seconds-=60;
      }
   }
   printf("%d %d %d",hours,minutes,seconds);
}