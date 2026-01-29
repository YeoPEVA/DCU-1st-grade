#include <stdio.h>

int main() {
    int x[] = {1,2,3}, data=10;
    int *p[3] = {x,&data,x+2};
    *p[0] = 4;
    *(*(p+1)) = 5;
    *--p[2] = 6;
    
    printf("%d", *x);
    printf("%d", *(x+1));
    printf("%d", *(x+2));
    printf("%d", *(p[1]));
    puts("");
    
    return 0;
}