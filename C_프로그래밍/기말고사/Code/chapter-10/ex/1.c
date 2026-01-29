#include <stdio.h>
#include <string.h> 

int main() {
    char user_input[80];
    
    gets(user_input);
    // printf("%s", user_input);

    // 15 
    // printf("Reverse!");
    
    for(int i = strlen(user_input)-1; i >= 0; i--){
        // printf("%d\n",i);
        printf("%c", user_input[i]);
    }
    
    // printf("%d",strlen(user_input));

    return 0;
}