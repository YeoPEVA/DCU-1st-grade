#include <stdio.h>
#include <string.h> 

int main() {
    char user_input[51];
    char check_char;
    char *check;
    
    gets(user_input);
    scanf("%c", &check_char);
    
    check = strchr(user_input, check_char);
    
    printf("문자 %c의 인덱스 위치는 %d입니다.", check_char, check-user_input);
    
}