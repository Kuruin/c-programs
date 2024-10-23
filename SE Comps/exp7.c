#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;  // Points to itself (circular)
    return newNode;
}

// Insert a node at the end of the circular linked list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;  // Maintain circular nature
    }
}

// Delete a node with a given value from the circular linked list
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) return;

    struct Node *temp = *head, *prev = NULL;

    // If the node to be deleted is the head node
    if (temp->data == key) {
        struct Node* last = *head;
        while (last->next != *head) last = last->next;

        if (temp->next == *head) {  // Single node case
            *head = NULL;
        } else {
            last->next = temp->next;
            *head = temp->next;
        }
        free(temp);
        return;
    }

    // Search for the node to delete
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != *head && temp->data != key);

    if (temp == *head) return;  // Key not found

    prev->next = temp->next;
    free(temp);
}

// Print the circular linked list
void printList(struct Node* head) {
    if (head == NULL) return;
    
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("Circular Linked List: ");
    printList(head);

    deleteNode(&head, 20);
    printf("After Deletion: ");
    printList(head);

    return 0;
}
