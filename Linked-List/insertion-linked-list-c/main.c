
/*
 Insertion Operation in Linked List........!
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
int count = 0;

/*
 Insert function to insert data at the beginning...
 */
void InsertAtBeginning(void){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at the beginning: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    count++;
}

/*
 Insert function to insert data at the end...
 */
void InsertAtEnd(void){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at the end: ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    count++;
}

/*
 Insert function to insert data at the given index...
 */
void InsertAtGivenIndex(void){
    int choice, choiceData;
    int pos,i=1;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the position where you want to enter the data: ");
    scanf("%d",&pos);
    printf("Enter the data to insert in the given position: ");
    scanf("%d", &choiceData);
    
    if(pos > count){
        printf("Enter the Valid Position.");
    }
    else{
        //Else Portion
        temp = head;
        while(i<pos){
            temp = temp->next;
            i++;
        }
        newnode->data=choiceData;
        newnode->next = temp->next;
        temp->next = newnode;
    }
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
            count++;
        }else{
            temp->next = newnode;
            temp = newnode;
            count++;
        }
        printf("Do you want to add more data(1/0)? :::: ");
        scanf("%d", &choice);
    }
    InsertAtBeginning();
    InsertAtEnd();
    
    printf("%d",count);
    InsertAtGivenIndex();
    temp = head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
