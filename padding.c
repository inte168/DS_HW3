// padding.c

#include <stdio.h>

struct student {
    char lastName[13];  /* 13 bytes */
    int studentID;      /* 4 bytes */
    short grade;        /* 2 bytes */
};

int main()
{
    
    printf("[-----������ 2021041047-----]\n");
    
    struct student pst;
    
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));
    //student�� size�� ���� 19������ padding�� ����Ǿ� 24�� ó���ȴ�.
    return 0;
}
