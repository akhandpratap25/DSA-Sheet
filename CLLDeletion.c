#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };

struct Node* deleteNode(struct Node* head, int key) {
    if (!head) return NULL;
    
    struct Node *curr = head, *prev = NULL;
    
    if (head->data == key) {
        if (head->next == head) { free(head); return NULL; } 
        while (curr->next != head) curr = curr->next;       
        curr->next = head->next;
        free(head);
        return curr->next; 
    }
    
    while (curr->next != head && curr->next->data != key) curr = curr->next;
    
    if (curr->next->data == key) {
        struct Node* temp = curr->next;
        curr->next = temp->next;
        free(temp);
    }
    return head;
}

int main() {
    struct Node *n1 = malloc(sizeof(*n1)), *n2 = malloc(sizeof(*n2)), *n3 = malloc(sizeof(*n3));
    n1->data = 10; n2->data = 20; n3->data = 30;
    n1->next = n2; n2->next = n3; n3->next = n1;
    struct Node* head = n1;

    head = deleteNode(head, 20); 

    struct Node* t = head;
    do { printf("%d -> ", t->data); t = t->next; } while (t != head);
    printf("(head)\n");
    return 0;
}