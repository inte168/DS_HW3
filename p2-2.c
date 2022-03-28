// p2-2.c

#include <stdio.h>

void print1 (int *ptr, int rows);

int main(){
    
    printf("[-----허정윤 2021041047-----]\n");
    
    int one[] = {0, 1, 2, 3, 4};
    
    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    //계속 말하지만 포인터 one의 값==포인터의 주소==배열의 첫 인덱스의 주소
    print1(&one[0], 5);
    
    return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    
    int i;
    printf("Adddress \t Contents\n");
    for(i=0; i<rows;i++) printf("%p \t %5d\n", ptr+i, *(ptr+i));
    //주소와 값이 보기좋게 출력된다.
    printf("\n");
}
