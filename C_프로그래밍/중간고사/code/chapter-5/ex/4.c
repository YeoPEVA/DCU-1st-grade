#include <stdio.h>

int main(void){
    int a = 0, i;
    int count = 0, tmp = 0;
    
    scanf("%d", &a);
    
    printf("Divisors of %d : ", a);
    
    for (i = 1; i <= a; i++){
        tmp = a % i;
        if(tmp == 0){
            printf("%d ", i);
            count += 1;
        }
    }
    printf("\nNumber of Divisors of %d : %d", a, count);
    
    return 0;
}