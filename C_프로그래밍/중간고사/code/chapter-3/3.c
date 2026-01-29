/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b = 0;
    int result = 0;
    
    scanf("%d %d", &a,&b);
    
    result = b >= 0 ? a << b : (a >> abs(b));
    printf("%d", result);
    
    return 0;
}