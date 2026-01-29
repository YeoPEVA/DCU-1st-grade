// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a = 0;
    int i = 0; 
    int f1 = 1;
    int f2 = 0;
    int f3 = 0;
    
	scanf("%d",&a);
    
    for(i = 0; i < a; i++){
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }

    return 0;
}