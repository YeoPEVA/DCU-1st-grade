// Online C compiler to run C program online
#include <stdio.h>

int check_score(int a){
    if(a >= 90){
        return 'A';
    }else if(a >= 80){
        return 'B';
    }else if(a >= 70){
        return 'C';
    }else if(a >= 60){
        return 'D';
    }else{
        return 'F';
    }
    
}

int main() {
    int a = 0;
    
    scanf("%d", &a);
    printf("%c", check_score(a));
    
    return 0;
}