#include <stdio.h>

int main() {
    // 1. Initialize a 1D integer array
    int arr[] = {10, 20, 30, 40, 50};
    
    // 2. Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Traversing the 1D array:\n");
    
    // 3. Loop through each element using its index
    for (int i = 0; i < n; i++) {
        // Access and print the current element
        printf("Element at index %d: %d\n", i, arr[i]);
    }
    
    return 0;
}
