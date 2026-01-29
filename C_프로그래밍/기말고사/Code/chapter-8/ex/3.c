#include <stdio.h>

int check_test(int a){
    int count = 0; 
    
    for(int i = 2; i <= a; i++){
       for(int j=2; j < i; j++){
           if(i % j == 0){
               count += 1;
           }
       }
       if(count == 0){
            printf("%d ", i);   
       }
       count = 0;
    }
    
}

int main(void) {
	int input_a = 0;
  
    scanf("%d", &input_a);
    check_test(input_a);
  
	return 0;
}
