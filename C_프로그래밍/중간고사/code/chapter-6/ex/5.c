// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, j = 0;

    int mat1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int mat2[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
    int mat3[3][3] = {{1,4,7}, {2,5,8}, {3,6,9}};
    int result[3][3] = {0};

    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            result[i][j] = result[i][j] + mat3[i][j];
        }
    }

    for(i=0; i<3; i++){
        printf("%2d %2d %2d", result[i][0],result[i][1],result[i][2]);
        if(i==2){
          break;
        }
      	printf("\n");
    }

  
    return 0;
}