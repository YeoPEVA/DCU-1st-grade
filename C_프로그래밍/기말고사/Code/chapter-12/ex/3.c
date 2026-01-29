// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    const double PI = 3.1415926;

    int x = 210;
    double a = sin(x * PI / 180);
    printf("%.1f ", a);

    x = 120;
    double b = cos(x * PI / 180);
    printf("%.1f ", b);

    x = 25; 
    double c = tan(x * PI / 180);
    printf("%.4f", c);

    return 0;
}