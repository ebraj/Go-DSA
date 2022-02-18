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

/*
 Performing the Preorder traversal
 */
void PreorderTraversal(struct node *root){
    if(root == 0){
        return;
    }
    printf("%d ",root->data);
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}

/*
 Performing the Inorder Traversal
 */
void InorderTraversal(struct node *root){
    if(root == 0){
        return;
    }
    InorderTraversal(root->left);
    printf("%d ",root->data);
    InorderTraversal(root->right);
}

/*
 Performing the Postorder Traversal
 */
void PostorderTraversal(struct node *root){
    if(root == 0){
        return;
    }
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    printf("%d ",root->data);
}


int main(){
    struct node *root;
    root = NULL;
    root = CreateNode();
    printf("Preorder Traversal :\n");
    PreorderTraversal(root);
    printf("\n");
    printf("Inorder Traversal :\n");
    InorderTraversal(root);
    printf("\n");
    printf("Postorder Traversal :\n");
    PostorderTraversal(root);
    printf("\n");
    return 0;
}

