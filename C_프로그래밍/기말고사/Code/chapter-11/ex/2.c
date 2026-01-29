#include <stdio.h>

enum Month{
    Jan1, Jan, Jan2, Jan3, Jan4, Jan5, Jan6, Jan7, Jan8, Jan9, Jan10, Jan11, Jan12, MonthCount
};

int main(void){
    int i = 1;
    for (i = Jan; i < MonthCount; i++)printf("%d ", i);
    return 0;
}