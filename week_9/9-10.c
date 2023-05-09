#include <stdio.h>

int main()
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    printf("a 값 입력 : ");
    scanf("%d", pa);
    printf("b 값 입력 : ");
    scanf("%d", pb);

    int tmp;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

    printf("바뀐 값 a는 %d, b는 %d\n\n", a, b);

    return 0;
}
