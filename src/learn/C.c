//
// Created by xuxiao on 24-9-5.
//
//
// Created by xuxiao on 24-9-5.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void addNode(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void deleteNode(Node** head, int value) {
    Node* current = *head;
    Node* previous = NULL;

    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) return; // Value not found

    if (previous == NULL) { // Node to be deleted is the head
        *head = current->next;
    } else {
        previous->next = current->next;
    }

    free(current);
}

void displayList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void sortList(Node** head) {
    Node *current = *head, *index = NULL;
    int temp;

    if (head == NULL) {
        return;
    } else {
        while (current != NULL) {
            index = current->next;
            while (index != NULL) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main() {
    Node* head = NULL;

    addNode(&head, 5);
    addNode(&head, 3);
    addNode(&head, 9);
    addNode(&head, 1);

    printf("Original List:\n");
    displayList(head);

    sortList(&head);

    printf("Sorted List:\n");
    displayList(head);

    deleteNode(&head, 3);

    printf("After deleting 3:\n");
    displayList(head);

    return 0;
}