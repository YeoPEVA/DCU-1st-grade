#include <stdio.h>

int main()
{
    int a,b;
    char op;
    
    scanf("%d %c %d", &a, &op, &b);
    op=='+' ? printf("%d %c %d = %d\n", a, op, b, a+b) : 0;
    op=='-' ? printf("%d %c %d = %d\n", a, op, b, a-b) : 0;
    op=='*' ? printf("%d %c %d = %d\n", a, op, b, a*b) : 0;
    op=='/' ? (b==0 ? printf("can not divide by 0\n") : printf("%d %c %d = %lf\n", a, op, b, a/b)) : 0;
    return 0;
}