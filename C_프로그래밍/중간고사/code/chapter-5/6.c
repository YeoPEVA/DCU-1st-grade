#include <stdio.h>

int main(){
    int a,b = 0;
    int i,f, type; 
    
    scanf("%d %d", &a, &b);
    
    for(i = 0; i < b; i++){
        
        if(i%2 == 0){
            type = 1;
        }else{
            type = 0;
        }
        
        for(f = 0; f < a; f++){
            if(type == 1){
                if(f%2 == 0){
                    printf("*");
                }else{
                    printf("/");
                }
            }else{
                if(f%2 == 0){
                    printf("/");
                }else{
                    printf("*");
                }
            }
            // printf("%d", f);
        }
        printf("\n");
    }
    
    return 0;
}