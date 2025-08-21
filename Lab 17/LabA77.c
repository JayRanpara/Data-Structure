#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
bool isMirror(struct Node *l,struct Node *r) {
   if(l==NULL && r==NULL) {
      return true;
   }
   if(l==NULL || r==NULL) {
      return false;
   }
   if(l->data!=r->data) {
      return false;
   }
   return isMirror(l->left,r->right) && isMirror(l->right,r->left);
}
bool isSymmetric(struct Node *root) {
   if(root==NULL) {
      return true;
   }
   return isMirror(root->left,root->right);
}
void main() {
   struct Node *root1 = createNode(8);
   root1->left = createNode(5);
   root1->right = createNode(7);
   root1->left->left = createNode(3);
   root1->left->right = createNode(6);
   root1->right->left = createNode(6);
   root1->right->right = createNode(3);

   if(isSymmetric(root1)) {
      printf("Given tree is symmetric");
   } else{
      printf(" Given tree is not symmetric");
   }
}