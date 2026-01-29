#include <stdio.h>

int main()
{
    int i;
    int a,b,c; 
    
    scanf("%d", &i);


    for(a = 0; a < i; a++){
        for(b = i-1; b > a; b--){
            printf(" ");
        }
        for(c = 0; c <= 2*a; c++){
            printf("*");
        }
        printf("\n");
    }

  	return 0;
}