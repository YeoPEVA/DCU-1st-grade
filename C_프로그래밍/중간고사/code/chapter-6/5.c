// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, count = 0, word_count = 0;
    char words[100];
    char tmp;
    int words_check[26] = {0};

    scanf("%s", &words);
    while(1){
        tmp = words[count];   

        // 대문자 
        for(i = 65; i<= 90; i++){
            // printf("%d\n", i);
            if(i == (int) tmp){
                words_check[word_count] += 1;
            }
            word_count += 1;
        }
        word_count = 0;

        // 소문자 
        for(i = 97; i<=122; i++){
            if(i == (int) tmp){
                words_check[word_count] +=1 ;
            }
            word_count += 1;
        }
        word_count = 0;

        if(tmp == '\0'){
            break;
        }
        count += 1; 
    }

    // 출력
    for(i=0; i < 26; i++){
        if(words_check[i] == 0){
            continue;
        }else{
            printf("%c : %d\n", i + 65, words_check[i]);
        }
    }


    return 0;
}