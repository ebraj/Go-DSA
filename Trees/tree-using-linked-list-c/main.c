/*
 Trees using linked list
 */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

/*
 Creating the node
 */
struct node *CreateNode(void){
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node data(-1 for non-node): ");
    scanf("%d",&x);
    if(x == -1){
        return 0;
    }
    newnode->data = x;
    printf("Enter the left child of %d\n",x);
    newnode->left = CreateNode();
    printf("Enter the right child of %d\n",x);
    newnode->right = CreateNode();
    
    return newnode;
}

int main(){
    struct node *root;
    root = NULL;
    root = CreateNode();
    return 0;
}
