// p2-2.c

#include <stdio.h>

void print1 (int *ptr, int rows);

int main(){
    
    printf("[-----������ 2021041047-----]\n");
    
    int one[] = {0, 1, 2, 3, 4};
    
    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    //��� �������� ������ one�� ��==�������� �ּ�==�迭�� ù �ε����� �ּ�
    print1(&one[0], 5);
    
    return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    
    int i;
    printf("Adddress \t Contents\n");
    for(i=0; i<rows;i++) printf("%p \t %5d\n", ptr+i, *(ptr+i));
    //�ּҿ� ���� �������� ��µȴ�.
    printf("\n");
}
