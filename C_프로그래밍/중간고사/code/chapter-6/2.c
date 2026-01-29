// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, j;
    char input_type; 
    int words[10];
    int tmp = 0;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &words[i]);
    }
    
    scanf(" %c", &input_type); 

    // 오름차순 
    if(input_type == 'A') {
        for(i=0; i<= 9; i++){
            for(j=0; j<=9; j++){
                if(words[i] < words[j]){
                    tmp = words[i];
                    words[i] = words[j];
                    words[j] = tmp; 
                }
            }
        }
    }else{ // 내림차순 
        for(i=0; i<= 9; i++){
            for(j=0; j<=9; j++){
                if(words[i] > words[j]){
                    tmp = words[i];
                    words[i] = words[j];
                    words[j] = tmp; 
                }
            }
        }
    }

    for(i=0; i <= 9; i++){
        printf("%d ", words[i]);
    }

    return 0;
}