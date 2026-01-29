#include <stdio.h>

#define arr_size 5

int main(void)
{
    int arr[arr_size];
    int i;
    int result  = 0;
    int *ptr_arr = &arr;

    for(i = 0; i<4; i++){
        scanf("%d", &arr[i]);
        if(i == 1){
            printf("%d\n", *(ptr_arr) + *(ptr_arr+1));
            result = *(ptr_arr) + *(ptr_arr+1);
        }else if(i == 2){
            printf("%d\n", result - *(ptr_arr+2));
            result = result - *(ptr_arr+2);
        }else if(i == 3){
            printf("%d\n", result * *(ptr_arr+3));
        }
    }

    return 0;
}