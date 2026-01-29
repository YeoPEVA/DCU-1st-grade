#include <stdio.h>

int main()
{
    int year = 0;
    int result = 0;
    int test = 0;
    
    scanf("%d",&year);
    
    result = year%4;
    
    test = (result%100 == 0 &&  result%400 != 0);
    printf("%d \n", test);
    
    // result%100 == 0 && result%400 != 0 
    // 평년 기준
    // result%100 == 0 && result%400 == 0
    // (result%100 == 0 && result%400 != 0) || (result%100 == 0 && result%400 == 0)
    
    result == 0 ? ((result%100 == 0 && result%400 != 0) || (result%100 == 0 && result%400 == 0)) ? printf("윤년입니다.") : printf("윤년이 아닙니다.") : printf("윤년이 아닙니다.");
		
  	return 0;
}