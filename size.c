// size.c

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;
    
    printf("[-----허정윤 2021041047-----]\n");
    
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    //int형은 4바이트, 포인터도 4바이트
}