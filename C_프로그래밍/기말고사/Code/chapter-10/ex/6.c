#include <stdio.h>
#include <string.h> 

char my_strlen(char *result, char check){
    // printf("it works?");
    
    int i =0;

    while(result[i] != '\0'){
        
        if((int)result[i] == (int)check){
            printf("%c ", check);
        }
        
        i += 1;
    }
    // printf("Done!");
}

int main() {
    int len = 0; 
    char test1[31];
    char test2;
    
    gets(test1);
    scanf("%c", &test2);
    
    // printf("%s", test1);
    // printf("%c", test2);

    my_strlen(&test1, test2);
    
    return 0;
}