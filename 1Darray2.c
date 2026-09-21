#include <stdio.h>
void insertElement(int arr[], int *size, int element, int index) {
    for (int i = *size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    (*size)++;
}

int main() {
    int arr[10] = {10, 20, 40, 50}; 
    int size = 4;                    
    insertElement(arr, &size, 30, 2);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
