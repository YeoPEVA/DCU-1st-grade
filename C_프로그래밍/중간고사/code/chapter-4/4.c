#include <stdio.h>

int main()
{
    int year = 0;
    int result = 0;
    int test = 0;
    
    scanf("%d",&year);
    
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
        printf("윤년");
    }
    else if (year % 4 ==0 && year % 100 == 0){
        printf("평년");
    }
    else if (year % 4 == 0){
        printf("윤년");
    }
    else{
        printf("평년");
    }
		
  	return 0;
}