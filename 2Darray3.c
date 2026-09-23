#include <stdio.h>
int main() {
  int matrixA = {
        {1, 2},
        {3, 4}
    };
    int matrixB = {
        {5, 6},
        {7, 8}
    };
    int productMatrix = {0}; 
    for (int i = 0; i < 2; i++) {    
        for (int j = 0; j < 2; j++) {     
            for (int k = 0; k < 2; k++) {  
                productMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    printf("Resultant Product Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", productMatrix[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
