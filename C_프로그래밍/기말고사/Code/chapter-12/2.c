#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main(void){
    int i = 0;
    int graph = 0;
    double s =0;

    for(i=0; i<=360; i +=30){
        s = sin((PI * i) / 180.0);

        
        printf("sin(%3d)", i);
        if (s >= 0) printf(" +%6.4f", s);
        else printf(" %6.4f", s);

        for (graph = -10; graph < s *10; graph++){
            printf(" ");
        }
        printf("*\n");
    }

    printf("\n");

    for(i=0; i<=360; i +=30){
        s = cos((PI * i) / 180.0);

        
        printf("cos(%3d)", i);
        if (s >= 0) printf(" +%6.4f", s);
        else printf(" %6.4f", s);

        for (graph = -10; graph < s *10; graph++){
            printf(" ");
        }
        printf("*\n");
    }

}