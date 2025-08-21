#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int valueToIndex[10000]; 

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

void inOrder(struct Node *root ) {
   if(root == NULL) {
      return;
   }
   inOrder(root->left);
   printf("%d ",root->data);
   inOrder(root->right);
}

struct Node* helper(int i1,int i2, int j1, int j2, int preOrder[], int postOrder[]) {
   if(i1>i2||j1>j2) return NULL;

   struct Node *root = createNode(preOrder[i1]);

   if(i1==i2) {
      return root;
   }

   int r = valueToIndex[preOrder[i1+1]];
   int size = r-j1+1;

   root->left = helper(i1+1,i1+size,j1,r,preOrder,postOrder);
   root->right = helper(i1+size+1,i2,r+1,j2-1,preOrder,postOrder);

   return root;


}

void main() {
   int preOrder[] = {1,2,4,5,3,6,7};
   int postOrder[] = {4,5,2,6,7,3,1};

   int n = sizeof(preOrder)/sizeof(preOrder[0]);

   // assuming values are < 10000
   for(int i = 0; i < n; i++) {
      valueToIndex[postOrder[i]] = i;
   }
   struct Node *root = helper(0,n-1,0,n-1,preOrder,postOrder);
   inOrder(root);
}

