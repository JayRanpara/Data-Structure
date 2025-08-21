#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include <limits.h>


int valueToIndex[10000]; 
int min = INT_MAX;
int max = INT_MIN;
struct Node{
   int data;
   struct Node *left;
   struct Node *right;
};

struct Node* createNode(int val) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = val;
   newNode->left = NULL;
   newNode->right = NULL;
   return newNode;
}
// void inOrder(struct Node *root ) {
//    if(root == NULL) {
//       return;
//    }
//    if(root->data<min) {
//       min = root->data;
//    } 
//    if(root->data>max) {
//       max = root->data;
//    }
//    inOrder(root->right);
// }
int minVal(struct Node *root) {
   struct Node *temp = root;
   while(temp->left != NULL) {
      temp = temp->left;
   }
   return temp->data;
}
int maxVal(struct Node *root) {
   struct Node *temp = root;
   while(temp->right != NULL) {
      temp = temp->right;
   }
   return temp->data;
}
void main() {
   struct Node *root1 = createNode(3);
   root1->left = createNode(2);
   root1->right = createNode(4);
   root1->left->left = createNode(1);

   //for bt
   // inOrder(root1);
   // printf("minimum value in binary tree is = %d and maximum value in tree is = %d",min,max);

   //for bst
   printf("minimum value in binary search tree is = %d and maximum value in binary search tree is = %d",minVal(root1),maxVal(root1));

}