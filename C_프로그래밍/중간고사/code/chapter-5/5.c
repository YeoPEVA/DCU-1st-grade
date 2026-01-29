#include <stdio.h>

int main()
{
    int i,j;
    int temperature = -10;
    int tmp = 0;
    
   for(temperature = -10; temperature <= 100; temperature += 10){
       // printf("%d \n", temperature);
       tmp = (9.0 / 5.0) * temperature + 32;
       printf("%d\n", tmp);
   }
   
  	return 0;
}