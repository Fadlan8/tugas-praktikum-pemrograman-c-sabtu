#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int B[11]; 
    int i, j = 0;

   
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) {
            B[j] = A[i];
            j++;
        }
    }

  
    printf("Bilangan genap yang disimpan:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

