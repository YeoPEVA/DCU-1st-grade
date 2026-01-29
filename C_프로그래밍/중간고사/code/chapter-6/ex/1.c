// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    char words[20];
    int count = 20;

    for(i=0; i < 20; i++){
        scanf("%c\n", &words[i]);
        
        if(words[i] == '.'){
            count = i;
            break;
        }
        // count = i; 
    }
     
    for(i=0; i<count; i++){
        printf("%c",words[i]);
    }

    return 0;
}