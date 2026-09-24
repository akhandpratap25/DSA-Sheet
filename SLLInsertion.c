#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
void insert(struct Node** head, int val) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = val;
    new_node->next = *head;
    *head = new_node;
}
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    insert(&head, 30);
    insert(&head, 20);
    insert(&head, 10);
    display(head);
    return 0;
}