#include <stdio.h>

int main(void)
{
    int arr[5] = { 111,222,333,444,555};

    int *aptr;

    aptr = &arr[2];
    printf("%d\n", *(aptr));
    printf("%d\n", *(aptr+1));

    return 0;
}