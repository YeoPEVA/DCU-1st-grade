#include <stdio.h>

char* string_conn(char* s1, char* s2){
    while(*s1 != '\0'){
        s1++;
    }
    while(*s2 != '\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    
    return s1;
}

int main(){
    char inputa[100];
    char inputb[100];
    
    scanf("%s", inputa);
    scanf("%s", inputb);
    
    string_conn(inputa,inputb);
    printf("my_strcat 함수 결과 : %s\n", inputa);
    
    return 0;
}