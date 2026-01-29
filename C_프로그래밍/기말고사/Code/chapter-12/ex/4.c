// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int my_strcmp(char* string_1, char* string_2){
    char c1, c2;

    while(1){
        c1 = *string_1++;
        c2 = *string_2++;

        if(c1 != c2) return c1 < c2 ? -1 : 1;
        if(!c1) break;
    }

    return 0;
}


int main() {
    char str1[100];
    char str2[100];

    int result = 0;
    
    scanf("%s %s", str1, str2);
    // scanf("%s", str2);

    result = my_strcmp(str1,str2);
    
    printf("%d", result);

    return 0;
}