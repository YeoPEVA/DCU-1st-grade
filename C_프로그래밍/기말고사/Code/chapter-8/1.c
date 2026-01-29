// Online C compiler to run C program online
#include <stdio.h>

int sum_var(int a, int b){
    return a+b;
}

int minus_var(int a, int b){
    if(a>b){
        return a-b;
    }else{
        return b-a;
    }
}

int multiply_var(int a, int b){
    return a*b;
}

int main() {
    int a,b = 0;
    
    scanf("%d %d", &a, &b);
    printf("%d %d %d", sum_var(a,b), minus_var(a,b), multiply_var(a,b));
    
    return 0;
}