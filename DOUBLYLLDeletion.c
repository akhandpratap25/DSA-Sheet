#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* deleteNode(struct Node* head, struct Node* del) {
    if (!head || !del) return head;

    if (head == del) head = del->next;

    if (del->next != NULL) del->next->prev = del->prev;

    if (del->prev != NULL) del->prev->next = del->next;

    free(del);
    return head;
}

int main() {
    struct Node *n1 = malloc(sizeof(*n1)), *n2 = malloc(sizeof(*n2)), *n3 = malloc(sizeof(*n3));
    n1->data = 10; n1->prev = NULL; n1->next = n2;
    n2->data = 20; n2->prev = n1;   n2->next = n3;
    n3->data = 30; n3->prev = n2;   n3->next = NULL;
    struct Node* head = n1;

    head = deleteNode(head, n2);

    struct Node* curr = head;
    while (curr) {
        printf("%d <-> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
    return 0;
}