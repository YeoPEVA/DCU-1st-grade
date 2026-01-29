#include <stdio.h>
#include <math.h> 

int main()
{
    int base_cm = 4;
    int hypotenuse_cm = 5;
    // 높이 
    int result = sqrt((hypotenuse_cm * hypotenuse_cm) - (base_cm * base_cm));
    
    printf("삼각형의 높이 : %d", result);
  
    return 0;
}