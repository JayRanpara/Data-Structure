#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void sort(char word1[]);
void anagram(char arr[], char words[100]);


void sort(char word1[]) {
   int size = strlen(word1);
   for(int i=0; i<size; i++) {
      for(int j=i+1; j<size; j++) {
         if(word1[i]>word1[j]) {
            char temp = word1[i];
            word1[i] = word1[j];
            word1[j] = temp;
         }
      }
   }
}

void anagram(char arr[], char words[100]) {
   if(strcmp(arr,words)==0) {
      printf("anagram word");
   }
   else {
      printf("non anagram word");
   }
}

void main() {
   int n;
   printf("enter no.of words = ");
   scanf("%d",&n);
   char arr[n][100];

   for(int i=0; i<n; i++) {
      scanf("%s", arr[i]);
   }
   
   srand(time(0));
   int idx = rand()%n;

   printf("%s",arr[idx]);

   char words[100];
   printf("enter words = ");
   scanf("%s",words);

   sort(arr[idx]);
   sort(words);

   anagram(arr[idx],words);
}