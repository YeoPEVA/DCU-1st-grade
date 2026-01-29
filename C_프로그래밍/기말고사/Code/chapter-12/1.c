// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a,b,c,d,e;
    int result;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    result = a+b+c+d+e;
    
    printf("모든 문자열의 정수 합 : %d", result);
    return 0;
}