#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int **matrix1 = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix1[i] = (int *)malloc(n * sizeof(int));
    }

    int **matrix2 = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix2[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);

    return 0;
}