#include <stdio.h>

int main(void){
    int drive_score = 0;
    int tmp = 0;
    scanf("%d", &drive_score);
    
    if (drive_score >= 70){
        printf("합격");
    }else {
        printf("불합격");
    }
    return 0;
}