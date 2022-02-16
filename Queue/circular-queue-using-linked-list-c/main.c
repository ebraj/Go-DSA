/*
 Circular Queue using Linked List
 */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;

/*
 Enqueue Operation
 */
void Enqueue(int x){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    
    if(front == NULL && rear == NULL){
        front = rear = newnode;
        rear->next = front;
    }
    else{
        rear->next = newnode;
        rear=newnode;
        rear->next = front;
    }
}

/*
 Dequeue Operation
 */
void Dequeue(void){
    struct node *temp;
    temp = front;
    
    if(front == NULL && rear == NULL){
        printf("Underflow.\n");
    }else if (front == rear){
        printf("Dequeued El: %d\n",front->data);
        front = rear = NULL;
        free(temp);
    }else{
        printf("Dequeued El: %d\n",front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
/*
 Peek Function
 */
void Peek(void){
    if(front == NULL && rear == NULL){
        printf("Underflow.\n");
    }else{
        printf("Peeked El: %d\n",front->data);
    }
}
/*
 Display Function
 */
void Display(void){
    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("Underflow.\n");
    }else{
        printf("Queue Elements: \n");
        while (temp->next != front) {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d \n",temp->data);
    }
}

int main(){
    Enqueue(2);
    Enqueue(4);
    Enqueue(9);
    Dequeue();
    Enqueue(20);
    Display();
    Peek();
    return 0;
}
