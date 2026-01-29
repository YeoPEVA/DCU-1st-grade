#include <stdio.h>
#include <string.h> 

int main() {
    char user_input[210];
    
    int i = 0;
    int count_test = 0;
    int count1[30] = {0, };
    int count2[30] = {0, };
    
    int ascii_b = 65;
    int ascii_s = 97; 
    
    gets(user_input);
    
    // check
    // printf("check");
    
    while (user_input[i] != '\0'){
        while(1){
            if(user_input[i] ==  ascii_b){
                count1[count_test] += 1;
            }
            
            if(ascii_b > 90){
                break;
            }
            
            ascii_b += 1; 
            count_test += 1; 
        }
        
        count_test = 0;
        
        while(1){
            if(user_input[i] == ascii_s){
                count2[count_test] += 1;
            }
            
            if(ascii_s > 122){
                break;
            }
            ascii_s += 1;
            count_test += 1;
        }
        
        ascii_b = 65;
        ascii_s = 97;
        count_test = 0;
        i++; 
    }
    
    ascii_b = 65; 
    ascii_s = 97;
    count_test = 0;
    
    printf("<전체 알파벳의 개수>\n");
    
    while(1){
      if(count1[count_test] == 0){
        ascii_b += 1;
        count_test += 1;
      }else{
          if((int)count1[count_test] != 0){
              printf("%c : %d\n", ascii_b,count1[count_test]);
          }
          
          ascii_b += 1;
          count_test += 1;   
      }
      
      if(ascii_b > 90){
          break;
      }
    }
    
    count_test = 0;
    
    while(1){
      if(count1[count_test] == 0 && count2[count_test] == 0){
        ascii_s += 1;
        count_test += 1;
      }else{
          if((int)count2[count_test] != 0){
              printf("%c : %d\n", ascii_s,count2[count_test]);
          }
          ascii_s += 1;
          count_test += 1;   
      }
      
      if(ascii_s > 122){
          break;
      }
        
    }
    
    return 0;
}