/*
 Insertion Operations in Doubly Linked List...
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL,*tail=NULL,*temp,*newnode;
int count;

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
        tail = temp;
        count++;
        printf("Do yo wanna add more data(1/0)? ::::: ");
        scanf("%d",&choice);
    }
}

/*
 Function to insert the element at the beginning of the linked list
 */
void InsertAtBeginning(void){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data that you want to add at the beginning: ");
    scanf("%d",&newnode->data);
    newnode->prev = 0;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

/*
 Function to insert the element at the end of the Linked List
 */
void InsertAtEnd(void){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data that you want to add at the end: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

/*
 Function to insert the element at the given position...
 */
void InsertAtIndex(void){
    int pos=0, i=1;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position you want to insert at: ");
    scanf("%d",&pos);
    printf("Enter the data that you want to add at that position: ");
    scanf("%d",&newnode->data);
    
    if(pos > count || pos < 0){
        printf("Invalid.");
    }else if(pos == 1){
        InsertAtBeginning();
    }else if(pos == count){
        InsertAtEnd();
    }else{
        while (i < pos-1) {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
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
    InsertAtBeginning();
    InsertAtEnd();
    InsertAtIndex();
    DisplayDoublyLinkedList();
    return 0;
}

