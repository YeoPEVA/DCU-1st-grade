#include <stdio.h>
#include <string.h>

typedef struct Student{
    char name[30];
    int age;
    char major[30];
    int student_num;
} information; 

int main(void){
    information in;
    strcpy(in.name, "고길동");
    in.age = 20;
    in.student_num = 20345205;
    strcpy(in.major, "컴퓨터공학전공");
    printf("%s\n%d\n%d\n%s ", in.name, in.age, in.student_num, in.major);
    
    return 0; 
    
}