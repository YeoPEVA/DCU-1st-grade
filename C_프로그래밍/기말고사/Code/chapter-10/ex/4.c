#include <stdio.h>
#include <string.h> 

int main() {
    int len = 0; 
    
    char test1[31];
    char test2[31];
    char test3[31];
    
    char result[100];
    
    result[0] = '\0';
    
    gets(test1);
    gets(test2);
    gets(test3);
    
    strcat(result, test1);
    strcat(result, test2);
    strcat(result, test3);
    
    len = strlen(result);
    result[len+1] = '\0';
    
    printf("Merged string length : %d\n", strlen(result));
    
    printf("Merged string : %s", result);
    
    
    
    return 0;
}