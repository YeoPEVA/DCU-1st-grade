#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int *arr = NULL;
	arr = malloc(sizeof(int)*3);
	if(arr == NULL) {
		printf("Memory allocation problem!\n");
		return -1;
	}
	*arr = 100;
	*(arr+1) = 101;
	*(arr+2) = 102;
	printf("Value : %d\n",*arr);
	printf("Value : %d\n",*(arr+1));
	printf("Value : %d\n",*(arr+2));
	free(arr);
	arr = NULL;
	return 0;
}
