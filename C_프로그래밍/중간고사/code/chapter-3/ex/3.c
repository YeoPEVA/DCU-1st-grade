#include <stdio.h>

int main() {
  
  double a = 0.0;
  double result = 0.0;
  
  scanf("%lf", &a);
  
  result = (a - 32) * 5.0/9.0;
  
  printf("화씨 %.1f도는 섭씨 %.1f도 입니다.\n", a, result);
  
  return 0;
}