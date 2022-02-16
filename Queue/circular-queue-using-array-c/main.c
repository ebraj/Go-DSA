/*
 Implementation of the Queue using the array.
 */

#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

/*
 Enqueue function - Add the item to the queue.
 */
void Enqueue(int x){
    if(rear == -1 && front == -1){
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else if ((rear+1)%N == front){
        printf("Overflow Case.\n");
    }
    else{
        rear = (rear+1)%N;
        queue[rear] = x;
    }
}

/*
 Dequeue function - Remove the item from the queue.
 */
void Dequeue(void){
    if(front==-1 && rear==-1){
        printf("Queue is empty.\n");
    }else if(front == rear){
        printf("Dequeued Element: %d\n",queue[front]);
        front = -1;
        rear = -1;
    }else{
        printf("Dequeued Element: %d\n", queue[front]);
        front = (front+1)%N;
    }
}

/*
 Peek function - To see the topmost(first value)
 */
void Peek(void){
    if(front==-1 && rear==-1){
        printf("Queue is empty.\n");
    }else{
        printf("Peek Element: %d\n", queue[front]);
    }
}

/*
 Display function
 */
void Display(void){
    int i = front;
    if(rear == -1 && front == -1){
        printf("Queue is empty.\n");
    }else{
        printf("Queue Elements: \n");
        do{
            printf("%d ",queue[i]);
            i = (i+1)%N;
        }while(i != (rear+1));
        printf("\n");
    }
}

int main(){
    Enqueue(3);
    Enqueue(5);
    Enqueue(10);
    Enqueue(2);
    Dequeue();
    Display();
    Peek();
    return 0;
}

