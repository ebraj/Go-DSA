/*
 Program to create the Linked list and display the list........!
 */

#include <stdio.h>
#include <stdlib.h>

/*
 Creating the node struct
 */
struct node{
    int data;
    struct node *next;
};

int main(){
    int choice;
    struct node *head=NULL,*newnode,*temp;
    head = NULL;
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head == NULL){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to add more data(1/0)? :::: ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp!=0) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
