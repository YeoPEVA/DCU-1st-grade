#include <stdio.h>
#include <math.h> 

int main()
{
   double kor_money = 10000000.0;
   
   printf("%.f 달러\n", floor(kor_money/1120));
   printf("%.f 엔\n", floor(kor_money/11.21));
   
   return 0;
}