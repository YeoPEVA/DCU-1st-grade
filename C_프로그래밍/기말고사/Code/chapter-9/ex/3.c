#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int *arr = NULL;
	int user_a = 0;
	int user_b = 0; 
    int tmp = 0;
	
	int i = 0;
    int j = 0; 
	
	// printf("Input size >>");
	scanf("%d", &user_a);
	
	arr = malloc(sizeof(int)*user_a);
	
	if(arr == NULL) {
		printf("Memory allocation problem!\n");
		return -1;
	}
	
    // printf("Input %d numbers >>", user_a);

	for(i = 0; i < user_a; i++){
        scanf("%d", &tmp);
	    *(arr+i) = tmp;
	}
	
    // printf("Ascending(1) or Descending(2) >>");
	scanf("%d", &user_b);
	
    // Asc
	if(user_b == 1){
	    for(i = 0; i <user_a; i++){
            for (j=0; j < user_a; j++){
                if(*(arr+i) < *(arr+j) ){
                    tmp = *(arr+i);
                    *(arr+i) = *(arr+j);
                    *(arr+j) = tmp;
                }
            }
        }

	}else{
        // Des
	    for(i = 0; i <user_a; i++){
            for (j=0; j < user_a; j++){
                if(*(arr+i) > *(arr+j) ){
                    tmp = *(arr+i);
                    *(arr+i) = *(arr+j);
                    *(arr+j) = tmp;
                }
            }
        }
	}

    for(i = 0; i < user_a; i++){
        printf("%d ",*(arr+i));
	}
	
	
	free(arr);
	arr = NULL;
	return 0;
}