
/*
 Reverse Operation in Linked List........!
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
struct node *head=NULL,*newnode,*temp;

/*
 Function for displaying the linked list
 */
void DisplayList(void){
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

/*
 Function to reverse the Linked List
 */
void ReverseLinkedList(void){
    struct node *prenode=NULL,*currentnode,*nextnode;
    currentnode = nextnode = head;
    while (nextnode != NULL) {
        nextnode = nextnode->next;
        currentnode->next = prenode;
        prenode = currentnode;
        currentnode = nextnode;
    }
    head = prenode;
    temp = head;
}

int main(){
    int choice;
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
    ReverseLinkedList();
    DisplayList();
    return 0;
}

