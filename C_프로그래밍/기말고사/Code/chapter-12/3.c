// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h> 

int main() {
    char input[100];
    int result = 0;

    gets(input);
    
    for(int i =0; input[i] != '\0'; i++){
        if(isspace(input[i])){
            result += 1; 
        }
    }
    
    printf("%d", result);
    
    return 0;
}