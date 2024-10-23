#include <stdio.h>
#define MAX 5  // Define the maximum size of the stack

// Stack structure
struct Stack {
    int items[MAX];
    int top;
};

// Initialize the stack
void init(struct Stack* s) {
    s->top = -1;  // Stack is empty when top is -1
}

// Check if the stack is full
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Push an element onto the stack
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
    } else {
        s->items[++(s->top)] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Pop an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return s->items[(s->top)--];
    }
}

// Peek at the top element of the stack
int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return s->items[s->top];
    }
}

int main() {
    struct Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element: %d\n", peek(&s));

    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));

    return 0;
}
