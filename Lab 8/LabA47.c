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
   return (rear+1)%size == front;
}

void insert(int data) {
   if(isFull()) {
      return;
   }
   if(isEmpty()) {
     front = rear = 0;
   }
   else{
      rear = (rear + 1)%size;
   }
   arr[rear] = data;
}
int delete() {
   if(isEmpty()) {
      return -1;
   }
   if(front == rear) {
      int data = arr[front];
      front = rear = -1;
      return data;
   }
   int data = arr[front];
   front = (front+1)%size;
   return data;
}
void display() {
   if(isEmpty()) {
      return;
   }
   int temp = front;
   while(true) {
      printf("%d",arr[temp]);
      if(temp == rear) break;
      temp = (temp+1)%size;
   }

}
void main() {
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   delete();
   insert(6);
   display();
}