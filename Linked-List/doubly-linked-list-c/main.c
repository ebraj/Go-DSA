/*
 Implementation of the Doubly Linked List
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;

/*
 Function to create the doubly linked list
 */
void CreateDoublyLinkedList(void){
    int enteredData,choice=1;
    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to add: ");
        scanf("%d",&enteredData);
        newnode->prev = 0;
        newnode->next = 0;
        newnode->data = enteredData;
        
        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do yo wanna add more data(1/0)? ::::: ");
        scanf("%d",&choice);
    }
}

/*
 Function to display the doubly linked list
 */
void DisplayDoublyLinkedList(void){
    temp = head;
    while (temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    CreateDoublyLinkedList();
    DisplayDoublyLinkedList();
    return 0;
}
