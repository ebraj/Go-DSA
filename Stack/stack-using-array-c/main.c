/*
 Implementation of stack using array
 */

#include <stdio.h>
#include <stdlib.h>

#define N 5
int stack[N];
int top = -1;

void push(void){
    if (top == N-1) {
        printf("Overflow\n");
    }else{
        int num;
        printf("Enter the data you want to add: ");
        scanf("%d",&num);
        top++;
        stack[top] = num;
    }
}
void pop(void){
    if(top == -1){
        printf("Underflow\n");
    }else{
        int popNum = stack[top];
        printf("Removed Element: %d\n",popNum);
        top--;
    }
}
void peek(void){
    int peekEl = stack[top];
    printf("Peeked Element: %d\n",peekEl);
}
void display(void){
    printf("Stack Elements: \n");
    for(int i=top;i>=0;i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    int choice;
    do {
        printf("1.Push() | 2.Pop() | 3.Peek | 4.Display | 5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter the valid choice.\n");
        }
    } while (choice!=5);
    return 0;
}
