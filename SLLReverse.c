#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* reverse(struct Node* head) {
    struct Node *prev = NULL, *next;
    while (head) {
        next = head->next; 
        head->next = prev; 
        prev = head;    
        head = next;      
    }
    return prev;
}

void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;

    head = reverse(head);
    display(head); 

    return 0;
}