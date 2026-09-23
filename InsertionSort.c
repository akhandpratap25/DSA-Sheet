#include <stdio.h>
int main() {
    int numbers[] = {12, 11, 13, 5, 6};
    for (int i = 1; i < 5; i++) {
        for (int j = i; j > 0; j--) {
            if (numbers[j - 1] > numbers[j]) {
                int temp = numbers[j];
                numbers[j] = numbers[j - 1];
                numbers[j - 1] = temp;
            } else {
                break;
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