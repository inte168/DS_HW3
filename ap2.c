// ap2.c 

#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[-----������ 2021041047-----]\n");
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
    //ap1���� �� �� �־��� ������ list�� ���� �ּҿ� ����
    //list[0]�� 10�̰�
    //list�� �ּҿ� list[0], list+0�� �ּҴ� ��� ����
    //ĭ�� �ű� �� ���� int���̶� �ּҴ� 4�� �޶�����.
    
    free(plist[0]);
}