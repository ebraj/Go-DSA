#include <stdio.h>

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main(){
    top = -1;
    printf("\nEnter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\nStack Operations using array");
    printf("\n---------------------------");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    do{
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                {
                    push();
                    break;
                }
                case 2:
                {
                    pop();
                    break;
                }
                case 3:
                {
                    display();
                    break;
                }
                case 4:
                {
                    printf("\nExit Point");
                    break;
                }
                default:
                {
                    printf("\nPlease enter a valid Choice(1/2/3/4)");
                }
        }
    }while(choice!=4);
    return 0;
}

// Making the Push() function
void push(){
    if(top >=n-1){
        printf("\nStack is overflow");
    }
    else{
        printf("Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

// Making the Pop() function
void pop(){
    if(top <=-1){
        printf("\nStack is underflow");
    }
    else{
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}

// Making the Display() function
void display(){
    if(top>=0){
        printf("\n The elements in Stack\n");
        for(i=top; i>=0;i--){
            printf("\n%d",stack[i]);
        }
            printf("\nPress next choice");
    }else{
        printf("\nThe Stack is empty");
    }
}