// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main() {
    int a, b, c =0;
    int count = 1;
    int answer_count = 0;
    int bowl_count = 0;

    // srand(time(0));

    int a1,a2,a3;
    // a1 = rand()%10;
    // a2 = rand()%10;
    // a3 = rand()%10;

    // printf("%d %d %d\n",a1,a2,a3);

    printf("숫자야구의 정답을 입력하세요 : ");
    scanf("%d %d %d", &a1, &a2, &a3);

    while(1){
        printf("\n[%d회차]\n", count);
        printf("0부터 9까지 숫자를 3개 입력 : ");
        scanf("%d %d %d", &a, &b, &c);

        if(a1 == a){
            answer_count += 1;
        }else if(a1 == b || a1 == c){
            bowl_count += 1;
        }

        if(a2 == b){
            answer_count += 1;
        }else if(a2 == a || a2 == c){
            bowl_count += 1;
        }

        if(a3 == c){
            answer_count += 1;
        }else if(a3 == a || a3 == b){
            bowl_count += 1;
        }

        printf("[결과]스트라이크 : %d, 볼 : %d\n", answer_count, bowl_count);
        if(answer_count == 3){  
            printf("\n사용자가 승리하였습니다.\n");
            break;
        }
        if(count == 7){
            printf("\n컴퓨터가 승리하였습니다.\n");
            break;
        }

        answer_count = 0;
        bowl_count = 0;

        count++; 
    }

    return 0;
}