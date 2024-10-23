#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Stack structure
struct Stack {
    struct Node* top;
};

// Initialize the stack
void initStack(struct Stack* s) {
    s->top = NULL;
}

// Check if the stack is empty
int isEmpty(struct Stack* s) {
    return s->top == NULL;
}

// Push an element onto the stack
void push(struct Stack* s, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
    printf("%d pushed onto stack\n", value);
}

// Pop an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;  // Return -1 for underflow
    }
    struct Node* temp = s->top;
    int poppedValue = temp->data;
    s->top = s->top->next;
    free(temp);
    return poppedValue;
}

// Peek at the top element
int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;  // Return -1 if empty
    }
    return s->top->data;
}

// Print the stack
void printStack(struct Stack* s) {
    struct Node* temp = s->top;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printStack(&s);

    printf("Popped: %d\n", pop(&s));
    printStack(&s);
    
    printf("Top element: %d\n", peek(&s));

    return 0;
}
