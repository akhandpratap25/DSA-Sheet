#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };

struct Node* insert(struct Node* head, int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    
    if (!head) {
        temp->next = temp;
        return temp;
    }
    
    struct Node* curr = head;
    while (curr->next != head) curr = curr->next;
    
    curr->next = temp;
    temp->next = head;
    return temp; 
}

int main() {
    struct Node* head = NULL;
    head = insert(head, 30);
    head = insert(head, 20);
    head = insert(head, 10);
    
    struct Node* t = head;
    do {
        printf("%d -> ", t->data);
        t = t->next;
    } while (t != head);
    printf("(head)\n");
    return 0;
}