#include <stdio.h>

int main() {
  double circumference;
  double circumNum;
  
  double radius = 3.58;
  const double PI = 3.14;
  
  circumference = radius * radius * PI;
  circumNum = 2 * radius * PI;
  
  printf("원의 면적 : %f\n", circumference);
  printf("원의 둘레 : %f\n", circumNum);
  return 0;
}