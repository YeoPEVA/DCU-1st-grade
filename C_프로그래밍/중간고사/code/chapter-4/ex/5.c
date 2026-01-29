#include <stdio.h>

int main(void){
    int a,b = 0;
    char c;
    
    scanf("%d %c %d", &a, &c, &b);
    
    switch(c){
        case '+':
            printf("%d %c %d = %d",a,c,b,a+b);
            break;
        case '-':
            printf("%d %c %d = %d",a,c,b,a-b);
            break;
        case '*':
            printf("%d %c %d = %d",a,c,b,a*b);
            break;
        case '/':
            if(b == 0){
                printf("0으로 나눌 수 없습니다.");
                break;
            }
            printf("%d %c %d = %d",a,c,b,a/b);
            break;
        case '%':
            printf("%d %c %d = %d",a,c,b,a%b);
            break;
        default:
            printf("연산을 수행할 수 없습니다.");
            break;
    }
    return 0;
}