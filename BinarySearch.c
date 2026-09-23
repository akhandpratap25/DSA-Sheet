#include <stdio.h>
int main() {
    int numbers[] = {10, 20, 30, 40, 50}; 
    int target = 40;  
    int low = 0;
    int high = 4;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (numbers[mid] == target) {
            printf("Found at index: %d\n", mid);
            return 0;
        }  
        if (numbers[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    printf("Not found\n");
    return 0;
}