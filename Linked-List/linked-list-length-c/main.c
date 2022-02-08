/*
 Program to calculate the length of the Linked List...
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(){
    struct node *head,*newnode,*temp;
    int choice,count=0;
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
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nTotal Length of Linked List: %d\n",count);
    return 0;
}
