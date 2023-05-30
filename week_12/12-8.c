#include <stdio.h>
#include <malloc.h>

int main()
{
    int *p;
    int i, cnt, hap = 0;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);

    p = (int *) malloc(sizeof(int) * cnt);

    for(i = 0; i < cnt; i++)
    {
	printf("%d 번째 숫자 : ", i + 1);
	scanf("%d", p + i);
    }

    int tmp;

    for(i = 0; i < cnt; i++)
    {
	tmp = *(p + i);
	if(tmp%2 == 0)
	    hap += tmp;
    }

    printf("\n입력한 짝수 합 ==> %d\n", hap);

    return 0;
}
