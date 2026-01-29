// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>

int main() {
    char input_str[100];
    int count = 0;
    
    scanf("%s",input_str);
    
    while(input_str[count]){
        if(isupper(input_str[count])){
            input_str[count]= tolower(input_str[count]);
        }else if(islower(input_str[count])){
            input_str[count] = toupper(input_str[count]);
        }
        count++;
    }
    
   // printf("%s\n", input_str);

    count = 0;

    while(input_str[count]){
        printf("%d", input_str[count]);
        count++;
    }

    return 0;
}