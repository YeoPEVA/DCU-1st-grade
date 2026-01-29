#include <stdio.h>

int main() {
    int user_score[3][3];
    int i, j, sum;
    double avg;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &user_score[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        sum = 0; 
        for(j = 0; j < 3; j++){
            sum += user_score[i][j];
        }
        avg = (double) sum / 3.0;
        printf("Student %d : total %d, avg %.1f, %s\n", i + 1, sum, avg, (sum >= 240 ? "Pass" : "Fail"));   
    }

    return 0;
}