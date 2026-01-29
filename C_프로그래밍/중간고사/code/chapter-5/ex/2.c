#include <stdio.h>

int main(void){
    int input_data, n = 0;
    int tmp, count = 0;
    
    scanf("%d", &input_data);
    
    do {
        if(count == 0){
            tmp = input_data / 10;   
        }else{
            tmp = tmp / 10;
        }
        count += 1;
    } while (tmp > 0);
    
    printf("%d", count);
    
    return 0;
}