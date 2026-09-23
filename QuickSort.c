#include <stdio.h>
void quickSort(int arr[], int first, int last) {
    if (first >= last) return; 
    int pivot = arr[first]; 
    int i = first, j = last;
    while (i < j) {
        while (arr[j] >= pivot && i < j) j--;
        if (i < j) arr[i++] = arr[j];
        while (arr[i] <= pivot && i < j) i++;
        if (i < j) arr[j--] = arr[i];
    }
    arr[i] = pivot; 

    quickSort(arr, first, i - 1); 
    quickSort(arr, i + 1, last);  
}
int main() {
    int numbers[] = {10, 7, 8, 3, 1, 5};
    quickSort(numbers, 0, 5);
    printf("Sorted numbers: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
