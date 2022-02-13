/*
 Implementation of the Queue using the array.
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

/*
 Enqueue function - Add the item to the queue.
 */
void Enqueue(int x){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }else{
        rear->next = newnode;
        rear = newnode;
    }
}

/*
 Dequeue function - Remove the item from the queue.
 */
void Dequeue(void){
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("Queue is Empty.\n");
    }else{
        printf("Dequeued Element: %d",front->data);
        front = front->next;
        free(temp);
    }
}

/*
 Peek function - To see the topmost(first value)
 */
void Peek(void){
    if(front == NULL && rear == NULL){
        printf("Queue is Empty.\n");
    }else{
        printf("Peeked Element: %d \n",front->data);
    }
}

/*
 Display function
 */
void Display(void){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = front;
    printf("Queue Elements:\n");
    while (temp != 0) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    Enqueue(3);
    Enqueue(5);
    Enqueue(10);
    Enqueue(2);
    Dequeue();
    Peek();
    Display();
    return 0;
}

