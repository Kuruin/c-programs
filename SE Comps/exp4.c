#include <stdio.h>
#define MAX 5  // Maximum size of the queue

// Queue structure
struct Queue {
    int items[MAX];
    int front, rear;
};

// Initialize the queue
void init(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
int isFull(struct Queue* q) {
    return q->rear == MAX - 1;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == -1;
}

// Enqueue operation
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue overflow\n");
    } else {
        if (q->front == -1) q->front = 0;  // Set front to 0 for the first element
        q->items[++(q->rear)] = value;
        printf("%d enqueued\n", value);
    }
}

// Dequeue operation
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return -1;
    } else {
        int value = q->items[q->front];
        if (q->front >= q->rear) {  // Reset queue if last element is dequeued
            q->front = q->rear = -1;
        } else {
            q->front++;
        }
        return value;
    }
}

int main() {
    struct Queue q;
    init(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    return 0;
}
