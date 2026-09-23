#include <stdio.h>

int main() {
    int matrixA[2][2] = {
        {1, 2},
        {3, 4}
    };    
    int matrixB[2][2] = {
        {5, 6},
        {7, 8}
    };
    int sumMatrix[2][2]; 
    for (int i = 0; i < 2; i++) {       
        for (int j = 0; j < 2; j++) {  
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
