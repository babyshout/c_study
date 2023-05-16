#include <stdio.h>

int calc(int v1, int v2, int op)    //매개변수 3개를 받아서 계산하는 함수
{
    int result;

    switch (op)
    {
	case 1 : result = v1 + v2; break;
	case 2 : result = v1 - v2; break;
	case 3 : result = v1 * v2; break;
	case 4 : result = v1 / v2; break;
    }	//매개변수 값에 따라 '1:덧셈, 2:뺄셈, 3:곱셈, 4:나눗셈'을 실행함

    return result;
}

int main()
{
    int res;
    int oper, a, b;

    printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
    scanf("%d", &oper);	//연산자를 입력함

    printf("계산할 두 숫자를 입력 : ");
    scanf("%d %d", &a, &b); //계산할 두 숫자를 입력함

    res = calc(a, b, oper); //매개변수 3개를 넣고 calc() 함수를 호출함.
    //계산결과는 res에 저장

    printf("계산 결과는 : %d \n", res);

    return 0;
}
