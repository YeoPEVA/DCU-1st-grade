#include <stdio.h>

int main()
{
    int i,j,tmp;
    
    for(i = 1; i <= 100; i++){
        if(i % 2 == 0){
            continue;
        }else if(i % 7 == 0){
            continue;
        }
        else if(i % 9 == 0){
            continue;
        }
        else{
            for(tmp = 0; tmp < 5; tmp++){
                printf("%d ",i);
            }
            if(i == 97){
                continue;
            }else{
                printf("\n");
            }
        }
        
    }
  	return 0;
}