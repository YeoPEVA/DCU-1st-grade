#include <stdio.h>

int main() {
  
  int a = 0;
  int result = 0; 
  
  scanf("%d", &a);
  
  result = a % 2; 
  
  printf("%s", result ? "홀수" : "짝수" );
  
  return 0;
}