#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

void insertAtFirst(){
    int x;
    printf("Enter data = ");
    scanf("%d",&x);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode -> info = x;
    newnode -> link = first;
    first = newnode;
}

void display(){
    if(first==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node *save;
    save=first;
    while (save != NULL)
    {
        printf("%d\n",save->info);
        save=save->link;
    }
    
}

void deleteAtFirst(){
    if(first==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node *temp;
    temp=first;
    first=first->link;
    free(temp);
}

void insertAtEnd(){
    int x;
    printf("Enter data = ");
    scanf("%d",&x);
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode -> info = x;
    newnode -> link = NULL;
    if(first==NULL){
        first=newnode;
    }
    struct node *save;
    save=first;
    while (save ->link != NULL)
    {
        save=save->link;
    }
    
    save->link = newnode;
}

void deleteAtEnd(){
    if(first==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node *pre=first;
    struct node *save;
    save=first -> link;
    while (save ->link != NULL)
    {
        pre=save;
        save=save->link;
    }
    pre->link=NULL;
    free(save);
}

void deleteFromSpecified (int position){
    if(first==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node *pre=first;
    struct node *save;
    save=first -> link;
    while (save ->link != NULL)
    {
        pre=save;
        save=save->link;
    }
    pre->link=save->link;
    free(save);
}

void count(){
    if(first==NULL){
        printf("Linked list is empty");
        return;
    }
    struct node *pre=first;
    struct node *save;
    save=first -> link;
    int count=0;
    while (save ->link != NULL)
    {
        count++;
    }
    printf("Count = %d",count);
}

void main(){
    while (1)
    {
        int n;
        printf("Enter Choise:\n1. Insert At Start\n2. Insert At End\n3. Display Linked List\n4. Delete From Start\n5. Delete From End\n6. Delete From Specified Location\n7. Count Nodes\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            insertAtFirst();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            display();
            break;
        case 4:
            deleteAtFirst();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            int position;
            printf("Enter Location where you want to Delete");
            scanf("%d",&position);
            deleteFromSpecified(position);
            break;
        case 7:
            count();
            break;
        default:
            printf("Invalid Choise");
            break;
        }
    }
}