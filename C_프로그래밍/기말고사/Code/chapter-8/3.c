// Online C compiler to run C program online
#include <stdio.h>

int check_measure(int a){
    int count = 0;
    
    for (int i =1; i <=a; i++){
        if(a % i == 0){
            count += 1;
        }
    }
    printf("%d", count);
    
    return 0; 
}

int main() {
    int a = 0;
    
    scanf("%d", &a);
    check_measure(a);
    
    return 0;
}