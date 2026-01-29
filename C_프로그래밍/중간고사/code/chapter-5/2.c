#include <stdio.h>

int main(){
    int a = 0;
    int i,j; 
    
    scanf("%d", &a);

    // 왼쪽 아래 직각 삼각형 
    printf("\n");

    for(i=0; i<a; i++){
        for(j=a; j<a+i+1; j++){
            printf("*");
        }
        printf("\n");
    }


    // 왼쪽 위 직각 삼각형 
    printf("\n");

    for(i=0; i<a; i++){
        // 5 4 3 2 1
        for(j=a; j>i; j--){
            printf("*");
            // printf("%d", i);
        }
        printf("\n");
    }


    // 오른쪽 아래 직각 삼각형
    printf("\n");

    for(i=0; i<a; i++){

        // 공백 
        for(j = a; j>i+1; j--){
            printf(" ");
        }
        
        // *
        for(j = 0; j < i+1; j++){
            printf("*");
        }

        printf("\n");
    }
    
    
    
    // 오른쪽 위 직각 삼각형
    printf("\n");

    for(i=0; i<a; i++){

        // 공백 
        for(j = 0; j < i; j++){
            printf(" ");
        }
        
        // *
        for(j = 0; j < a-i; j++){
            printf("*");
        }
        
        printf("\n");
    }


    // 피라미드 모양 삼각형 
    printf("\n");
    
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
    return 0;
}