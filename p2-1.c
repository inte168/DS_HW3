// p2-1.c 

#include<stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main()
{
    printf("[-----허정윤 2021041047-----]\n");
    for(i=0; i<MAX_SIZE; i++) input[i] = i;
    /*for checking call by reference */
    //input배열의 값을 채운다.
    
    printf("address of input = %p\n", input);
    //input의 주소==input[0]의 주소
    
    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);
    //float이라 소숫점까지 출력된다.
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);
    //call by reference로 불렀기 때문에 가져온 값은 list의 주소값이 된다.
    //주소값은 복제해서 만들어두기 때문에 다른 주소값이다.
    
    int i;
    float tempsum = 0;
    for(i=0;i<n;i++) tempsum += list[i];
    //tempsum에 배열의 각 값들을 모두 더한다.
    
    return tempsum;
}