#include <stdio.h>

int main() {
  double rank, noOfStudents;
  rank = 5;
  noOfStudents = 75;
  printf("당신은 상위 %.2f%%입니다.\n", 100 * (rank/noOfStudents) );
  return 0;
}