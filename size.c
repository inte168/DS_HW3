// size.c

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;
    
    printf("[-----������ 2021041047-----]\n");
    
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    //int���� 4����Ʈ, �����͵� 4����Ʈ
}