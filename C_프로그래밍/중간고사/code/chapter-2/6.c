#include <stdio.h>

int main() {
  double k_mile = (10 / 0.621371) - 0.150;
  double K_result = k_mile / 3;
  
  printf("%f\n", K_result);
  return 0;
}