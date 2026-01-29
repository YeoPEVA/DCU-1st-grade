#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char **strings = (char **)calloc(n, sizeof(char *));
    if (strings == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    scanf("%s", strings); 
    printf("%s", strings);
    free(strings);
    return 0;
}