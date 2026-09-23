#include <stdio.h>
int main() {
    int numbers[] = {5, 1, 4, 2, 8};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Sorted numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}