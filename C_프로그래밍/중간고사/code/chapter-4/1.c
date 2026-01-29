#include <stdio.h>

int main() {
    int x, y; 
    int x1, y1, x2, y2; 
    int minX, minY, maxX, maxY; 
    
    scanf("%d %d", &x, &y);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    // 좌표 계산 (최소, 최대)
    if(x1 < x2) {
        minX = x1;
        maxX = x2;
    } else {
        minX = x2;
        maxX = x1;
    }
    if(y1 < y2) {
        minY = y1;
        maxY = y2;
    } else {
        minY = y2;
        maxY = y1;
    }
    
    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}