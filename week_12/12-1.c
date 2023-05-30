#include <stdio.h>

int main()
{
    int aa[3];	//정수형 배열을 선언함
    int *p; //정수형 포인터 변수를 선언함
    int i, hap = 0;

    for (i = 0; i < 3; i++)
    {
	printf("%d번째 숫자 : ", i + 1);
	scanf("%d", &aa[i]);	//배열에 숫자 3개를 입력함
    }

    p = aa; //포인터 변수에 배열 aa의 주소를 대입함

    for (i = 0; i < 3; i++)
	hap = hap + *(p + i);	//aa[0] ~ aa[2]의 합계를 구함

    printf("입력 숫자의 합 => %d\n", hap);

    return 0;
}
