#include <stdio.h>

int main() {
    int matrixA[2][2] = {
        {10, 20},
        {30, 40}
    }; 
    int matrixB[2][2] = {
        {4, 5},
        {6, 7}
    };
    int diffMatrix[2][2]; 
    for (int i = 0; i < 2; i++) {   
        for (int j = 0; j < 2; j++) {  
            diffMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    printf("Resultant Matrix (A - B):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", diffMatrix[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
