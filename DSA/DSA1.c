#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef struct Stack {
    int top;
    int arr[MAX_SIZE];
} Stack;
void push(Stack *stack, int value) {
    if (stack->top >= MAX_SIZE - 1) {
        printf("Stack overflow.\n");
        exit(1);
    }
    stack->top++;
    stack->arr[stack->top] = value;
}
int pop(Stack *stack) {
    if (stack->top < 0) 
    {
        printf("Stack underflow.\n");
        exit(1);
    }
    int value = stack->arr[stack->top];
    stack->top--;
    return value;
}
void display(Stack *stack) 
{
    if (stack->top < 0) 
    {
        printf("Stack is empty.\n");
    } 
    else 
    {
        printf("Stack contents: ");
        for (int i = 0; i <= stack->top; i++) 
        {
            printf("%d ", stack->arr[i]);
        }
        printf("\n");
    }
}
int main() 
{
    Stack stack;
    stack.top = -1;
    printf("Performing 5 push operations:\n");
    for (int i = 1; i <= 5; i++) 
    {
        push(&stack, i);
        printf("Push operation %d: ", i);
        display(&stack);
    }
    printf("\nPerforming 3 pop operations:\n");
    for (int i = 1; i <= 3; i++) 
    {
        printf("Pop operation %d: %d\n", i, pop(&stack));
        printf("Stack after pop operation %d: ", i);
        display(&stack);
    }
    return 0;
}