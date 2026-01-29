#include <stdio.h>

int main(){
    int a = 0;
    int i,j; 
    
    scanf("%d", &a);
    
    for(i = 0; i<a; i++){
        // 공백 
        for(j = a-1; j>i; j--){
            printf(" ");
        }
        
        // *
        for(j = 0; j < 2*i+1; j++){
            printf("*");
        }
        
        printf("\n");
    }

    for(i = 1; i<a; i++){
        // 공백
        for(j = 0; j<i; j++){
            printf(" ");
        }

        for(j = a*2 -1 ; j>2*i; j-- ){
            printf("*");
        }
        printf("\n");
        // *
    }
    
    return 0;
}