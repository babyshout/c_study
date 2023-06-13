#include <stdio.h>

int main()
{
    int input1, input2;
    int *p1, *p2;

    printf("a 값 입력 : ");
    scanf("%d", &input1);

    printf("b 값 입력 : ");
    scanf("%d", &input2);

    p1 = &input1;
    p2 = &input2;

    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    printf("바뀐 값 a는 %d, b는 %d\n", *p1, *p2);

    return 0;
}
