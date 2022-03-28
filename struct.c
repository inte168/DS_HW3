// struct.c

#include<stdio.h>

struct student1 {
    char lastName;
    int studentID;
    char grade;
};
//����ü struct1

typedef struct {
    char lastName;
    int studentID;
    char grade;
} student2;
//typeof�� �̿��� ����ü student2

int main(){
    
    printf("[-----������ 2021041047-----]\n");
    
    struct student1 st1 = {'A', 100, 'A'};
    //st1�̶� �̸����� student1 ����ü ����.
    //typeof�� �̿����� �ʾƼ� struct�� �Է��ؾ��Ѵ�.

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentID = %d\n", st1.studentID);
    printf("st1.grade = %c\n", st1.grade);
    //st1�� �� ������ ���

    student2 st2 = {'B', 200, 'B'};
    //st2�� �̸����� student2 ����ü ����
    //typeof�� �̿��Ͽ� struct�� ���� ����.

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentID = %d\n", st2.studentID);
    printf("st2.grade = %c\n", st2.grade);
    //�� ������ ���

    student2 st3;
    //st3 ����
    st3 = st2;
    //st2�� ������ st3�� ����

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentID = %d\n", st3.studentID);
    printf("st3.grade = %c\n", st3.grade);
    //st3�� ���� ���
    
    /*equality test*/
    //if(st3 == st2)      /*not working*/
    //    printf("equal\n");
    //else
    //    printf("not equal\n");
    
    
    return 0;
}