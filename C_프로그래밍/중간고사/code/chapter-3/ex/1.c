#include <stdio.h>
int main(void)
{
	int a =1;
	int b =0;
 	--a;
  	++b;
	       
	       
	printf("%d\n", a && b);
	--a;
	++b; 
	       
	printf("%d\n", a || b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}