#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *scores = (int *)malloc(n * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    double average = sum / n;

    printf("%.2f\n", average);

    free(scores);

    return 0;
}
