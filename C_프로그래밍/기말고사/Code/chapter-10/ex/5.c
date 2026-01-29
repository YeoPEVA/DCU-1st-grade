#include <stdio.h>
#include <string.h> 

char my_strlen(char *result){
    int i =0;
    
    while(result[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
    int len = 0; 
    char test1[31];
    
    gets(test1);

    len = my_strlen(test1);
    printf("Length : %d",len);
    
    return 0;
}