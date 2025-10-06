#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
void display(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    printf("Original ");
    display(head);
    int value;
    printf("\nEnter value to insert at beginning: ");
    scanf("%d", &value);
    insertAtBeginning(&head, value);
    printf("\nAfter Insertion ");
    display(head);
    return 0;
}

