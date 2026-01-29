#include <stdio.h>

int main(void){
    double user_kg, user_m = 0.0;
    double result = 0.0;
    
    scanf("%lf %lf", &user_kg, &user_m);
    
    result = user_kg / (user_m * user_m);
    
    if (result >= 30.0){
        printf("중등도비만");
    }else if (result >= 25.0 && result < 30.0){
        printf("경도비만");
    }else if (result >= 23.0 && result < 25.0){
        printf("과체중");
    }else if (result >= 18.5 && result < 23.0){
        printf("정상");
    }else{
        printf("저체중");
    }
    
    return 0;
}