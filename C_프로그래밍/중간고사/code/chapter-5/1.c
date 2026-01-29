// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i = 0;
    int count = 0;
    
    for(i = 1; i < 10; i++){
        for(count = 2; count < 10; count++){
            printf("%d x %d = %d",count,i, i*count);
            if(count == 9){
                printf("\n");
            }else{
                printf("\t");
            }
        }
    }

    return 0;
}