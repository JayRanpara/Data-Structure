#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 5

   int arr[size];
   int front = -1;
   int rear = -1;

bool isEmpty() {
   return front == -1 && rear == -1;
}

bool isFull() {
   return rear == size-1;
}

void addLast(int data) {
   if(isFull()) {
      return;
   }
   if(isEmpty()) {
      front = rear = 0;
      arr[front] = data;
   } 
   else{
      rear++;
      arr[rear] = data;
   }
}


int deleteFirst() {
   if(isEmpty()) {
      return -1;
   }
   if(front == rear) {
      int data = arr[front];
      front = rear = -1;
      return data;
   }
   int data = arr[front];
   front = front+1;
   return data;
}

void addFirst(int data) {
   if(front == 0) {
      return;
   }
   if(isEmpty()) {
      front = rear = 0;
     
   }
   else{
      front--;
   }
   arr[front] = data;
}

int deleteLast() {
   if(isEmpty()) {
      return -1;
   }
   if(front == rear) {
      int data = arr[front];
      front = rear = -1;
      return data;
   }
   int data = arr[rear];
   rear = rear-1;
   return data;
}
void display() {
   int temp = front;
   while(temp<=rear) {
      printf("%d",arr[temp]);
      temp++;
   }
}
void main() {
   addLast(1);
   addLast(2);
   addLast(3);
   addLast(4);
   addLast(5);
   deleteFirst();
   addFirst(6);
   deleteLast();
   display();
}