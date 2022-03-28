// ap1.c

#include <stdio.h>
#include <stdlib.h>

void main()
{
    
    printf("[-----허정윤 2021041047-----]\n");
    
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
	//list[0]의 값은 1이고, 다른 것들은 동일한 주소값으로 출력된다.
	//포인터 list, list의 주소값, 배열list[0]의 주소값은 동일하다는 것을 알 수 있다.
	
	printf("----------------------------------\n\n");
	printf("value of list[1]    = %d\n", list[1]);
	printf("addresss of list[1] = %p\n", &list[1]);
	printf("value of *(list+1)  = %d\n", *(list+1));
	printf("address of list+1   = %p\n", list+1);
	//위와 유사하다. 값과 주소를 list[1], list+1에서 보여준다.
	//*연산자를 이용하면 배열에 저장된 값을 볼 수 있다
	
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
    //plist로 다시 한번 보는 결과
	//배열의 주소값, 포인터로의 값과 주소값은 동일하고
	//gcc에서 배열이나 포인터에 값을 넣지 않으면 주소값이 00000000로 표시됨을 알 수 있다.
    
    free(plist[0]);
    
}

	