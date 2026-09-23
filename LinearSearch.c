#include <stdio.h>
int main() {
    int numbers[] = {10, 25, 47, 8, 99};
    int target = 8;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            printf("Found at index: %d\n", i);
            return 0; 
        }
    }
    printf("Not found\n");
    return 0;
}