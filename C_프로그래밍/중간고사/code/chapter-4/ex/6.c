#include <stdio.h>

int main(void){
    int a,b,c = 0;
    int tmp = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b){
        tmp = a;
        if(tmp < c){
            tmp = c;
        }
    }else{
        tmp = b;
        if(tmp < c){
            tmp = c;
        }
    }
    
    printf("%d", tmp);
    return 0;
}