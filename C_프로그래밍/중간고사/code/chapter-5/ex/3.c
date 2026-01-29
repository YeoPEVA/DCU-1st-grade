#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    
    while(1){
        scanf("%d ", &a);
        if(a == 0){
            break;
        }
        if(a < 0){
            continue;
        }
        if(b == 0){
            b = a;
        }else{
            b *= a;
        }
    }
    
    printf("%d",b);
    
  	return 0;
}