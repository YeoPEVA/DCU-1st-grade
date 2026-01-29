#include <stdio.h>

int main(void){
    int input_money = 0;
    char type_money;
    
    scanf("%d %c",&input_money, &type_money);
    
    switch(type_money){
        case 'w':{
            printf("%lf달러", input_money * 0.00087);
            break;
        }
        case 'd':{
            printf("%d원", input_money * 1152);
            break;
        }
        default : {
            printf("Wrong!");
            break;
        }
    }
    
}