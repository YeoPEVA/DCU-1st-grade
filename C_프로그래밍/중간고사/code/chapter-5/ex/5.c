#include <stdio.h>

int main()
{
    int i;
    
    for (i = 1; i < 21; i++){
        if(i%3 == 0){
            continue;
        }else{
            printf("%d ",i);
        }
    }

  	return 0;
}