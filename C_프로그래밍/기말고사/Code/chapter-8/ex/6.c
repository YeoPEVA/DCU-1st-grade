#include <stdio.h>

int add(int a){
    if(a <= 1){
        return 1;
    }else{
        return (a + add(a-1));
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
