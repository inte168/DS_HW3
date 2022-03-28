// ap1.c

#include <stdio.h>
#include <stdlib.h>

void main()
{
    
    printf("[-----������ 2021041047-----]\n");
    
	int list[5];
	int *plist[5] = {NULL,};

	plist[0] = (int *)malloc(sizeof(int));
	
	list[0] = 1;
	list[1] = 100;
	
	*plist[0] = 200;
	
	printf("value of list[0]        = %d\n", list[0]);
	printf("addresss of list[0]     = %p\n", &list[0]);
	printf("value of list           = %p\n", list);
	printf("address of list         = %p\n", &list);
	//list[0]�� ���� 1�̰�, �ٸ� �͵��� ������ �ּҰ����� ��µȴ�.
	//������ list, list�� �ּҰ�, �迭list[0]�� �ּҰ��� �����ϴٴ� ���� �� �� �ִ�.
	
	printf("----------------------------------\n\n");
	printf("value of list[1]    = %d\n", list[1]);
	printf("addresss of list[1] = %p\n", &list[1]);
	printf("value of *(list+1)  = %d\n", *(list+1));
	printf("address of list+1   = %p\n", list+1);
	//���� �����ϴ�. ���� �ּҸ� list[1], list+1���� �����ش�.
	//*�����ڸ� �̿��ϸ� �迭�� ����� ���� �� �� �ִ�
	
	printf("----------------------------------\n\n");
	printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0]   = %p\n", &plist[0]);
    printf("&plist      = %p\n", &plist);
    printf("plist       = %p\n", plist);
    printf("plist[0]    = %p\n", plist[0]);
    printf("plist[1]    = %p\n", plist[1]);
    printf("plist[2]    = %p\n", plist[2]);
    printf("plist[3]    = %p\n", plist[3]);
    printf("plist[4]    = %p\n", plist[4]);
    //plist�� �ٽ� �ѹ� ���� ���
	//�迭�� �ּҰ�, �����ͷ��� ���� �ּҰ��� �����ϰ�
	//gcc���� �迭�̳� �����Ϳ� ���� ���� ������ �ּҰ��� 00000000�� ǥ�õ��� �� �� �ִ�.
    
    free(plist[0]);
    
}

	