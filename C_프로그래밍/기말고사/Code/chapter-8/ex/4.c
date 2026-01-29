#include <stdio.h>
void printArray(int* ptr, int len) {
	int i;
  
  	for(i = len-1; i >= 0; i--){
      printf("%d ", *(ptr+i));
    }
}
int main(void) {
	int score[] = { 99, 84, 91, 78, 89 };
	int array_length =sizeof(score) /sizeof(score[0]);
	printArray(score, array_length);
	return 0;
}