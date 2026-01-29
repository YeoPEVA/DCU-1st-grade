#include <stdio.h>

int main(void){
    double a,b = 0;
   
    scanf("%lf %lf", &a, &b);
    
    if (a > 0 && b > 0){
        printf("%lf", a + b);
    }else if (a > 0 && b <= 0){
        printf("%lf", a - b);
    }else if (a <= 0 && b > 0){
        printf("%lf", -a + b);
    }else if (a <= 0 && b <= 0){
        printf("%lf", -a - b);
    }
    
    return 0;
}