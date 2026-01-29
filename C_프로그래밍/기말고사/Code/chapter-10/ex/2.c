#include <stdio.h>
#include <string.h> 


char reverseString(char *user_input2){
    
    char user_input_reverse[100];
    int check_len = strlen(user_input2);
    int count = 0;
    
    // printf("%d", check_len);
    
    for(int i = check_len-1; i >= 0; i--){
        user_input_reverse[count] = user_input2[i];
        count += 1;
    }
    
    user_input_reverse[check_len] = '\0';
    // printf("%s", user_input_reverse);
    strcpy(user_input2, user_input_reverse );
    // printf("%s", user_input2);
    // printf("%s", user_input_reverse);
    
}

int main() {
    char user_input[100];
    
    gets(user_input);
    reverseString(&user_input);
    
    printf("%s", user_input);
    

    return 0;
}