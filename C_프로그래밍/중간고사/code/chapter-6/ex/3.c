// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, j, min;
    int count = 0; 
    char words[100];
    char tmp;
    char input_tmp; 

	for(i = 0; i < 100; i++) {
        scanf("%c\n", &input_tmp);
        if(input_tmp < 'a' || input_tmp > 'z') {
            break;
        }
        words[i] = input_tmp;
        count++;
    }
    
    for (i = 0; i <count; i++){ 
        min = i;
        for(j = i +1; j < count; j++){
            if(words[j] < words[min]){
                min = j;
            }
        }
        tmp = words[i];
        words[i] = words[min];
        words[min] = tmp;
    }

    for(i=0; i< count; i++){
        printf("%c\n",words[i]);
    }

    return 0;
}