/*
 Implementation of stack using Linked List
 */


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top=NULL;

/*
 Function to push to Stack
 */
void push(int x){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
/*
 Function to pop from stack
 */
void pop(void){
    struct node *temp;
    temp = top;
    if(temp == NULL){
        printf("Underflow.\n");
    }else{
        printf("Popped Element: %d\n",top->data);
        top = top->next;
        free(temp);
    }
}
/*
 Function to display the elements of stack
 */
void display(void){
    struct node *temp;
    temp = top;
    if(temp == NULL){
        printf("Underflow.\n");
    }else{
        while (temp != 0) {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}
/*
 Function to peek the data
 */
void peek(void){
    if(top == NULL){
        printf("Underflow.\n");
    }else{
        printf("Peeked Element: %d\n",top->data);
    }
}

int main(){
    push(3);
    push(8);
    push(2);
    push(20);
    display();
    pop();
    peek();
    display();
    return 0;
}
