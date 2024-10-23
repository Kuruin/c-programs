#include <stdio.h>
#include <ctype.h>  // For isdigit()

#define MAX 100

// Stack structure
struct Stack {
    int top;
    int items[MAX];
};

// Initialize the stack
void init(struct Stack* s) {
    s->top = -1;
}

// Push an element onto the stack
void push(struct Stack* s, int value) {
    s->items[++(s->top)] = value;
}

// Pop an element from the stack
int pop(struct Stack* s) {
    return s->items[(s->top)--];
}

// Evaluate a postfix expression
int evaluatePostfix(char* postfix) {
    struct Stack s;
    init(&s);
    int i = 0;
    
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(&s, postfix[i] - '0');  // Convert char to int and push
        } else {
            int val2 = pop(&s);
            int val1 = pop(&s);
            switch (postfix[i]) {
                case '+': push(&s, val1 + val2); break;
                case '-': push(&s, val1 - val2); break;
                case '*': push(&s, val1 * val2); break;
                case '/': push(&s, val1 / val2); break;
            }
        }
        i++;
    }
    
    return pop(&s);  // Final result
}

int main() {
    char postfix[MAX];
    
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    
    printf("Result: %d\n", evaluatePostfix(postfix));
    
    return 0;
}
