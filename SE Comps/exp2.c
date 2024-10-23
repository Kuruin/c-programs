#include <stdio.h>
#include <ctype.h>  // For isdigit() and isalpha()
#include <string.h> // For strlen()

#define MAX 100

// Stack structure
struct Stack {
    int top;
    char items[MAX];
};

// Initialize the stack
void init(struct Stack* s) {
    s->top = -1;
}

// Push an element onto the stack
void push(struct Stack* s, char value) {
    s->items[++(s->top)] = value;
}

// Pop an element from the stack
char pop(struct Stack* s) {
    return s->items[(s->top)--];
}

// Peek at the top element
char peek(struct Stack* s) {
    return s->items[s->top];
}

// Check if the stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Function to check operator precedence
int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

// Function to convert infix to postfix
void infixToPostfix(char* infix, char* postfix) {
    struct Stack s;
    init(&s);
    int i = 0, j = 0;
    
    while (infix[i] != '\0') {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];  // Add operand to postfix
        } else if (infix[i] == '(') {
            push(&s, infix[i]);
        } else if (infix[i] == ')') {
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);  // Pop operators till '('
            }
            pop(&s);  // Pop '('
        } else {  // Operator
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(infix[i])) {
                postfix[j++] = pop(&s);  // Pop higher precedence operators
            }
            push(&s, infix[i]);
        }
        i++;
    }
    
    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);  // Pop remaining operators
    }
    
    postfix[j] = '\0';  // Null-terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];
    
    printf("Enter infix expression: ");
    scanf("%s", infix);
    
    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);
    
    return 0;
}
