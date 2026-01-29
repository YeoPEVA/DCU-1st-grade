#include <stdio.h>

int subtract(int a, int b){
  	int c = 0;
  
  	if(a > b){
      c = a - b;
    }
    if(a < b) {
       c = b - a; 
    }
  	 return c;
}

int main(void) {
	int n1, n2;
    printf("Enter two integers : ");
    scanf("%d %d", &n1, &n2);
    printf("Subtraction result : %d\n", subtract(n1, n2));	
	return 0;
}
