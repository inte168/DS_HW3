// struct.c

#include<stdio.h>

struct student1 {
    char lastName;
    int studentID;
    char grade;
};
//구조체 struct1

typedef struct {
    char lastName;
    int studentID;
    char grade;
} student2;
//typeof를 이용한 구조체 student2

int main(){
    
    printf("[-----허정윤 2021041047-----]\n");
    
    struct student1 st1 = {'A', 100, 'A'};
    //st1이란 이름으로 student1 구조체 생성.
    //typeof를 이용하지 않아서 struct도 입력해야한다.

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentID = %d\n", st1.studentID);
    printf("st1.grade = %c\n", st1.grade);
    //st1의 각 값들을 출력

    student2 st2 = {'B', 200, 'B'};
    //st2란 이름으로 student2 구조체 생성
    //typeof를 이용하여 struct는 쓰지 않음.

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentID = %d\n", st2.studentID);
    printf("st2.grade = %c\n", st2.grade);
    //각 값들을 출력

    student2 st3;
    //st3 생성
    st3 = st2;
    //st2의 값들을 st3에 복사

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentID = %d\n", st3.studentID);
    printf("st3.grade = %c\n", st3.grade);
    //st3의 값들 출력
    
    /*equality test*/
    //if(st3 == st2)      /*not working*/
    //    printf("equal\n");
    //else
    //    printf("not equal\n");
    
    
    return 0;
}