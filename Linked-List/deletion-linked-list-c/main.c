
/*
 Deletion Operation in Linked List........!
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
 Delete function to delete data at the beginning...
 */
void DeleteAtBeginning(void){
    temp = head;
    head = head->next;
    free(temp);
}

/*
 Delete function to delete data at the end...
 */
void DeleteAtEnd(void){
    struct node *prevNode=NULL;
    temp = head;
    while (temp->next != NULL) {
        prevNode = temp;
        temp = temp->next;
    }
    if(temp == head){
        head = 0;
    }else{
        prevNode->next = 0;
    }
    free(temp);
}

/*
 Delete function to delete data at the given position...
 */
void DeleteAtGivenIndex(void){
    struct node *nextNode;
    int choice;
    int pos,i=1;
    printf("Enter the position where you want to enter the data: ");
    scanf("%d",&pos);
    
    if(pos > count){
        printf("Enter the Valid Position.");
    }
    else{
        //Else Portion
        temp = head;
        while(i<(pos-1)){
            temp = temp->next;
            i++;
        }
        nextNode = temp->next;
        temp->next = nextNode->next;
        free(nextNode);
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
    DeleteAtBeginning();
    DeleteAtEnd();
    DeleteAtGivenIndex();
    temp = head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}

