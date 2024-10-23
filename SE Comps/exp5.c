#include <stdio.h>
#define MAX 5  // Maximum size of the circular queue

// Circular Queue structure
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
    return (q->front == (q->rear + 1) % MAX);
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
        q->rear = (q->rear + 1) % MAX;
        q->items[q->rear] = value;
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
        if (q->front == q->rear) {  // Reset queue if the last element is dequeued
            q->front = q->rear = -1;
        } else {
            q->front = (q->front + 1) % MAX;
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
    enqueue(&q, 40);
    enqueue(&q, 50);

    printf("Dequeued: %d\n", dequeue(&q));
    enqueue(&q, 60);  // This should work due to circular nature

    printf("Dequeued: %d\n", dequeue(&q));

    return 0;
}
