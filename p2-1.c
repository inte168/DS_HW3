// p2-1.c 

#include<stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main()
{
    printf("[-----������ 2021041047-----]\n");
    for(i=0; i<MAX_SIZE; i++) input[i] = i;
    /*for checking call by reference */
    //input�迭�� ���� ä���.
    
    printf("address of input = %p\n", input);
    //input�� �ּ�==input[0]�� �ּ�
    
    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);
    //float�̶� �Ҽ������� ��µȴ�.
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);
    //call by reference�� �ҷ��� ������ ������ ���� list�� �ּҰ��� �ȴ�.
    //�ּҰ��� �����ؼ� �����α� ������ �ٸ� �ּҰ��̴�.
    
    int i;
    float tempsum = 0;
    for(i=0;i<n;i++) tempsum += list[i];
    //tempsum�� �迭�� �� ������ ��� ���Ѵ�.
    
    return tempsum;
}