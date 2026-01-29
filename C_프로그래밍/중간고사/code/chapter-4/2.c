#include <stdio.h>

int main(void){
    // 50000, 10000, 1000, 100, 10
    int type_a = 0, type_b = 0, type_c = 0, type_d = 0, type_e = 0;
    int input_money, output_money = 0;
    int tmp = 0;
    
    scanf("%d %d", &input_money, &output_money);
    
    if(input_money < output_money){
        printf("돈이 부족합니다.");
    }else{
        tmp = input_money - output_money;
        
        if(tmp >= 50000){
            type_a = tmp / 50000;
            tmp = tmp - type_a * 50000;
        }
        
        if(tmp >= 10000){
            type_b = tmp / 10000;
            tmp = tmp - type_b * 10000;
        }
        
        if(tmp >= 1000){
            type_c = tmp / 1000;
            tmp = tmp - type_c * 1000;
        }
        
        if(tmp >= 100){
            type_d = tmp / 100;
            tmp = tmp - type_d * 100;
        }
        
        if(tmp >= 10){
            type_e = tmp / 10;
            tmp = tmp - type_e * 10;
        }
        
        printf("50000원 : %d개\n", type_a);
        printf("10000원 : %d개\n", type_b);
        printf("1000원 : %d개\n", type_c);
        printf("100원 : %d개\n", type_d);
        printf("10원 : %d개", type_e);
    }
    
    return 0;
    
}