#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node *left;
   struct Node *right;
};

struct Node * insert(struct Node *root, int val){
   if(root == NULL) {
      root = (struct Node*)malloc(sizeof(struct Node));
      root->data = val;
      root->left = NULL;
      root->right = NULL;
      return root;
   }
   if(root->data>val) {
      root->left = insert(root->left,val);
   }
   else {
      root->right = insert(root->right,val);
   }
   return root;
}

void inOrder(struct Node *root) {
   if(root == NULL) {
      return;
   }
   inOrder(root->left);
   printf("%d ",root->data);
   inOrder(root->right);
}

void preOrder(struct Node *root) {
   if(root == NULL) {
      return;
   }
   printf("%d ",root->data);
   preOrder(root->left);
   preOrder(root->right);
}

void postOrder(struct Node *root) {
   if(root == NULL) {
      return;
   }
   postOrder(root->left);
   postOrder(root->right);
   printf("%d ",root->data);
}
int search(int val,struct Node *root) {
   if(root==NULL) {
      return 0;
   }
   if(root->data == val) {
      return 1;
   }
   if(root->data>val) {
      return search(val,root->left);
   }
   else {
      return search(val,root->right);
   }  
}
struct Node * inorderSuccessor(struct Node *root) {
   struct Node *temp = root;
   while(temp->left != NULL) {
      temp = temp->left;
   }
   return temp;
}
struct Node * delete(struct Node *root, int val) {
   if(root==NULL) {
      return NULL;
   }
   
   if(root->data>val){
      root->left = delete(root->left,val);
   }
   else if(root->data<val){
      root->right = delete(root->right,val);
   }
   else{//root->val==val
   
      if(root->left==NULL&&root->right == NULL) {
         return NULL;
      }
      else if(root->left==NULL) {
         free(root->left);
         return root->right;
      }
      else if(root->right==NULL) {
         free(root->right);
         return root->left;
      }
      else {
         struct Node *rightsub = inorderSuccessor(root->right);
         root->data = rightsub->data;
         root->right = delete(root->right,rightsub->data);
      }
   }
}
void main() {
   struct Node *root = NULL;
   while(1) {
      printf("\nenter 1 for insert 2 preorder 3 inorder 4 postorder 5 for search 6 for delete = "); 
      int n;
      scanf("%d",&n);
      switch(n) {
         case 1: printf("enter val = ");
                  int val;
                  scanf("%d",&val);
                  root = insert(root,val);
                  break;
         case 2:  printf("\npreorder :");
                  preOrder(root);
                  break;
         case 3:  printf("\ninorder :");
                   inOrder(root);
                   break;
         case 4:  printf("\npostorder :");
                  postOrder(root);
                  break;

         case 5 :  printf("enter searching value :");
                  int data;
                  scanf("%d",&data);
                  if(search(data,root)==1){
                     printf("\nvalue exists in bst.");
                  } else{
                     printf("\nvalue not exists in bst.");
                  }
                  break;
         case 6 : printf("enter delete val = ");
                  int value;
                  scanf("%d",&value);
                  root = delete(root,value);
                  break;
         default:printf("invalid choice");
         }   
   }

}