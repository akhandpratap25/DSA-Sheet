#include <stdio.h>

int main() {
    int a[] = {1, 2, 3}, b[] = {4, 5, 6, 7};
    int n1 = 3, n2 = 4, n3 = n1 + n2, c[7];

    for(int i = 0; i < n1; i++) c[i] = a[i];
    
    for(int i = 0; i < n2; i++) c[n1 + i] = b[i];

    for(int i = 0; i < n3; i++) printf("%d ", c[i]);
    
    return 0;
}
