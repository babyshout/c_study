#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p, *s;	//정수형 포인터를 선언함
    int i, j;

    printf("malloc()함수를 사용하지 않은 pointer p의 초기값\n");
    for(i = 0; i < 10; i++)
	printf("초기화하지 않은 포인터 p의 초기값 p[%d] ==> %d\n", i, p[i]);

    printf("malloc() 함수 사용\n");
    p = (int *) malloc(sizeof(int) * 10);    //malloc()함수로 정수형 메모리 3개를 할당함

    for ( i = 0; i < 10; i++)
	printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

    free(p);	//포인터 변수 p가 가리키는 곳의 실제값을 출력함

    printf("\ncalloc() 함수 사용 \n");
    s = (int *) calloc(sizeof(int), 10);	//calloc()함수로 정수형 메모리 3개를 할당함

    for(j = 0; j < 10; j++)
	printf("할당된 곳의 초기값 s[%d] ==> %d\n", j, s[j]);
    //포인터 변수 s가 가리키는 곳의 실제값을 출력함

    free(s);

    return 0;
}
