#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int search(struct Node* head, int key) {
    while (head != NULL) {
        if (head->data == key) return 1;
        head = head->next;
    }
    return 0;
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = NULL;
    if (search(head, 20)) 
        printf("Found!\n");
    else 
        printf("Not Found!\n");

    return 0;
}