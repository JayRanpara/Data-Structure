#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
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

int max(int a, int b){
   return (a>b)?a:b;
}

int heightOfTree(struct Node *root) {
   if(root==NULL||(root->left==NULL&&root->right==NULL)) {
      return 0;
   }
   return 1 + max(heightOfTree(root->left),heightOfTree(root->right));
}
bool isBalance(struct Node *root) {
   if(root == NULL) {
      return true;
   }
   int lh = heightOfTree(root->left);
   int rh = heightOfTree(root->right);
   if(abs(lh-rh)>1) {
      return false;
   }
   return isBalance(root->left)&&isBalance(root->right);
}
void main() {

   //balanced-tree
   // struct Node *root1 = createNode(1);
   // root1->left = createNode(2);
   // root1->right = createNode(2);
   // root1->right->left = createNode(15);
   // root1->right->right = createNode(7);

   //not-balanced tree
   struct Node *root1 = createNode(1);
   root1->left = createNode(2);
   root1->right = createNode(2);
   root1->left->left = createNode(3);
   root1->left->right = createNode(3);
   root1->left->left->left = createNode(4);
   root1->left->left->right = createNode(4);

   if(isBalance(root1)) {
      printf("height-balanced");
   }
   else{
      printf("Not height-balanced");
   }
   
}