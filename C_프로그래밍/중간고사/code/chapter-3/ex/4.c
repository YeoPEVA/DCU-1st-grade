#include <stdio.h>

int main() {
  
  double DollarWonExcahneRate, dollar, won;
  
  scanf("%lf %lf", &DollarWonExcahneRate, &dollar);
  
  won = dollar * DollarWonExcahneRate;
  
  printf("%.2f달러는 %.0f원 입니다.", dollar, won);
  
  return 0;
}