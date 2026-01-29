#include <stdio.h>

#define PI 3.14159265

double cylinderArea(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}

int main() {
    double a1, a2;
    
    scanf("%lf", &a1);
    scanf("%lf", &a2);

    double radius = a1 / 2;

    double area = cylinderArea(a1, a2);
    printf("%.2f\n", area);

    return 0;
}
