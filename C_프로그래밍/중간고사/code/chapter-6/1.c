// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    int score[5];
    int total = 0, min = 0, max = 0;
    int tmp_input = 0; 
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &tmp_input);
        if(tmp_input < 0){
            printf("잘못된 입력입니다.\n");
            i = i -1;
            continue;
        }else{
            score[i] = tmp_input;
        }
    }

    min = score[0];
    max = score[0];

    for (i=0; i<5; i++){
        total += score[i];

        if(score[i] > max){
            max = score[i];
        }

        if(score[i] < min){
            min = score[i];
        }
    }

    printf("total = %d\n", total);
    printf("mean = %.2f\n", (double)total / 5);
    printf("max = %d\n", max);
    printf("min = %d\n", min);

    if(total >= 350){
        printf("합격입니다.\n");
    }else{
        printf("불합격입니다.\n");
    }

    return 0;
}