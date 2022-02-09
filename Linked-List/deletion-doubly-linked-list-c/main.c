/*
 Deletion Operations in Doubly Linked List...
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
 Function to delete the element from the beginning
 */
void BeginningElDelete(void){
    if(head == NULL){
        printf("Linked List is empty.");
    }else{
        temp = head;
        head = temp->next;
        head->prev = 0;
        free(temp);
    }
}

/*
 Function to delete the element from the end
 */
void EndElDelete(void){
    if(tail == NULL){
        printf("Linked List is empty.");
    }else{
        temp = tail;
        tail->prev->next = 0;
        tail = tail->prev;
        free(temp);
    }
}

/*
 Function to delete the element from the position...
 */
void DeleteElFromIndex(void){
    int pos=0, i=1;

    printf("Enter the position you want to insert at: ");
    scanf("%d",&pos);
    
    if(pos < 0 || pos > count){
        printf("Not a valid position.");
    }else if (pos == 1){
        BeginningElDelete();
    }else if(pos == count){
        EndElDelete();
    }else{
        temp = head;
        while (i<pos) {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
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
    BeginningElDelete();
    EndElDelete();
    DeleteElFromIndex();
    DisplayDoublyLinkedList();
    return 0;
}


