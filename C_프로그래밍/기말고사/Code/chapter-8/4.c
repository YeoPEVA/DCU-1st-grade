// Online C compiler to run C program online
#include <stdio.h>

int check_second(int seconds){
    int hours, minutes;
    
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    
    if (hours > 0) {
        printf("%d시간 ", hours);
    }
    
    if (minutes > 0) {
        printf("%d분 ", minutes);
    }
    
    if (seconds > 0) {
        printf("%d초", seconds);
    }
}

int main() {
    int a = 0;
    
    scanf("%d", &a);
    check_second(a);
    
    return 0;
}