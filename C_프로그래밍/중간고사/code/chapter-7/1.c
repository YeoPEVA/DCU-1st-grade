#include <stdio.h>

#define arr_size 6

int main(void)
{
    int arr[arr_size];
    int i;
    int sum  = 0;
    int *ptr_arr = &arr;

    for(i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++){
        sum += *(ptr_arr+i);
    }

    printf("%d", sum);

    return 0;
}