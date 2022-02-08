/*
 Insertion in Linked list using C
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;

/*
 Function to create the Linked List from the given array..
 */
void CreateLinkedList(int A[],int size){
    newnode = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        head = temp = newnode;
    }
        for (int i=0; i < size; i++) {
            newnode = (struct node *)malloc(sizeof(struct node));
            temp->next = newnode;
            temp->data = A[i];
            temp = newnode;
        }
    temp = head;
}

int main(){
    int arr1[] = {2,5,8,10,20};
    CreateLinkedList(arr1,5);
    while (temp->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}

