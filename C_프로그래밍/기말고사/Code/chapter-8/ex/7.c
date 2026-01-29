#include <stdio.h>

int add(int a){
    if(a < 3){
        return 1;
    }else{
        return (add(a-1) + add(a-2));
    }
}

int main() {
    int input_a;
    int result = 0;
    
    scanf("%d", &input_a);
    result = add(input_a);
    printf("%d", result);
    
    return 0;
}