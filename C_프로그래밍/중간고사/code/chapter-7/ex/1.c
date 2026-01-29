// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,tmp = 0;
    int *ptr_a;
    int *ptr_b; 
    int *ptr_tmp;

    scanf("%d %d", &a, &b);

    ptr_a = &a;
    ptr_b = &b;
    ptr_tmp = &tmp;

    tmp = *ptr_a;
    a = *ptr_b;
    b = *ptr_tmp;

    printf("%d %d", a,b);
    
    return 0;
}