#include <stdio.h>
#define RADIUS 15.0
#define PI 3.141592

int main() {
  double circumference;
  double circumNum;
  
  circumference = RADIUS * RADIUS * PI;
  circumNum = circumference / 5;
  
  printf("반지름 %.1f인 피자의 넓이는 %.1f입니다.\n",RADIUS, circumference);
  printf("1인당 %.1f 크기의 피자를 먹을 수 있습니다.\n", circumNum);
  return 0;
}