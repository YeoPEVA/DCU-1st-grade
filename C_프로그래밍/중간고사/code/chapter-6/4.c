// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, j, count = 0;
    int words[100];
    int words_check[10] = {0};
    int last, first = 0;
    
    for (i = 0; i < 100; i++) {
        scanf("%d", &words[i]);
        if(words[i] == -1){
            break;
        }
        count += 1;
    }

    for(i = 0; i < count; i++){
        last = words[i] % 10;
        first = words[i] / 10;

        // printf("last : %d\n", last);
        // printf("first : %d\n", first);

        for(j = 0; j <10; j++){
            if(last == j){
                words_check[j] += 1;
            }

            if(first == j && first != 0){
                words_check[j] += 1;
            }
        }
    }

    for(i=0; i < 10; i++){
        printf("%d : %d\n", i, words_check[i]);
    }

    return 0;
}