// ap2.c 

#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[-----허정윤 2021041047-----]\n");
    int list[5];
    int *plist[5];
    
    list[0] = 10;
    list[1] = 11;
    
    plist[0] = (int*)malloc(sizeof(int));
    
    printf("list[0] \t=%d\n", list[0]);
    printf("addresss of list \t=%p\n", list);
    printf("addresss of list[0] \t=%p\n", &list[0]);
    printf("addresss of list + 0 \t=%p\n", list+0);
    printf("addresss of list + 1 \t=%p\n", list+1);
    printf("addresss of list + 2 \t=%p\n", list+2);
    printf("addresss of list + 3 \t=%p\n", list+3);
    printf("addresss of list + 4 \t=%p\n", list+4);
    printf("addresss of list[4] \t=%p\n", &list[4]);
    //ap1에서 볼 수 있었듯 포인터 list의 값이 주소와 동일
    //list[0]은 10이고
    //list의 주소와 list[0], list+0의 주소는 모두 동일
    //칸을 옮길 때 마다 int형이라 주소는 4씩 달라진다.
    
    free(plist[0]);
}