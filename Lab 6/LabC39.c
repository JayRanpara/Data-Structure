#include<stdio.h>
#include<stdlib.h>
typedef struct{
   int start;
   int end;
}Interval;

int compare(const void *a, const void *b) {
   Interval *i1 = (Interval *)a;
   Interval *i2 = (Interval *)b;
   return i1->start-i2->start;
}
void mergeIntervals(Interval intervals[], int n) {
   if(n<=0)return;
   qsort(intervals,n,sizeof(Interval),compare);

   Interval result[n];
   result[0] = intervals[0];
   int index = 0;

   for(int i=1; i<n; i++) {
      if(intervals[i].start<=result[index].end){
         result[index].end = (intervals[i].end>result[index].end)?intervals[i].end:result[index].end;
      } else {
         index++;
         result[index] = intervals[i];
      }
   }
   for(int i=0; i<=index; i++) {
      printf("{%d %d}",result[i].start,result[i].end);
   }
}
void main() {
   Interval intervals[] = {{1,3},{2,4},{6,8},{9,10}};
   int n = sizeof(intervals)/sizeof(intervals[0]);
   mergeIntervals(intervals,n);
}