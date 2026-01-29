#include <stdio.h>
int min(int a, int b, int c) {
  int temp = 0;  
  if(a >= b){
      temp = b;
  }else{
    temp = a;
  }
  
  if(temp > c){
     return c; 
  }else{
    return temp;
  }
  
}
int main() {
	int n1, n2, n3;
	printf("Enter three integers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Smallest value : %d\n", min(n1, n2, n3));
	return 0;
}
