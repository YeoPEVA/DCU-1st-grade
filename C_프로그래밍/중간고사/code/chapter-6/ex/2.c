// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    int words[10];
    
    for(i=0; i <= 9; i++){
        scanf("%d", &words[i]);
    }

    for(i=0; i<= 9; i++){
        if(words[i] %2 == 0){
            printf("Even\n");
        }else{
            printf("Odd\n");
        }
    }

    return 0;
}