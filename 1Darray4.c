
#include <stdio.h>

int main() {
    int arr[] = {12, 34, 54, 2, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2; 
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }
    if (index != -1) 
        printf("Found %d at index %d\n", key, index);
    else 
        printf("%d not found\n", key);

    return 0;
}
