#include <stdio.h>

int main()
{
    int i,j;
    
    int year = 0;
   
    int start_day = 0;
    int last_day = 0;

    int year_type = 0;
    int days = 0; 
    
    scanf("%d", &year);
    
    // 윤년 체크
    if((year % 4 == 0) && ((year % 100 != 0) || (year % 400) == 0)){
        // printf("윤년");
        year_type = 1; 
    }else{
        // printf("평년");
        year_type = 0;
    }
    
    // 윤년 정보에 따른 달력 생성
    for(int i =1; i <= 12; i++){
        printf("%d월\n", i);
        printf("SUN\tMON\tTUS\tWED\tTHU\tFRI\tSAT\n");
        printf("===================================================\n");

        // 시작 요일 
        int last_year = year - 1;
        int lastyeardate = 0;
        int inputyeardate = 0;
        int month = i;

        lastyeardate = last_year * 365 + last_year / 400 + last_year / 4 - last_year / 100 + 1;

        for (j = 1; j < month; j++)	
	    {
            int date = 0;

            if(j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12){
                date = 31;
            }else if(j == 4 || j == 6 || j == 9 || j == 11){
                date = 30;
            }else if(j == 2 && year_type == 1){
                date = 29;
            }else if(j == 2 && year_type == 0){
                date = 28;
            }

            inputyeardate += date;	
	    }
// 1년 1월 1일 ~ 입력년도 전달 일 -> 7로 나누어서 결과 값에 따른 요일 체크 

	    start_day = (lastyeardate + inputyeardate) % 7;
        // start_day += 1;
        // printf("%d\n", start_day);

        // 입력받은 달 - 마지막 날짜 
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            last_day = 31;
        }else if(i == 4 || i == 6 || i == 9 || i == 11){
            last_day = 30;
        }else if(i == 2 && year_type == 1){
            last_day = 29;
        }else if(i == 2 && year_type == 0){
            last_day = 28;
        }


        // 출력 (달력)
        for (j = 0; j < start_day; j++){
            printf("\t");
        }

        for (j = 1; j <= last_day; j++){
            printf("%d\t", j);

            if((start_day + j) % 7 == 0){
                printf("\n");
            }
        }
        
        printf("\n\n");
    }
   
  	return 0;
}