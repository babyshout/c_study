#include <stdio.h>

int main()
{
	int aa[3][4];
	int i, k;

	int val = 1;	//배열에 들어갈 값을 초기화함

	for(i = 0; i < 3; i++)	//바깥 for문을 세번 반복함. 앞첨자가 행 단위로 변경됨
	{
		for(k = 0; k < 4; k++)	//안쪽 for문을 네번 반복함. 뒤 첨자가 열 단위로 변경됨
		{
			aa[i][k] = val;
			val++;	//배열에 val 값을 입력한 후 1 증가시킴
		}
	}

	printf("aa[0][0]부터 aa[2][3]까지 출력. \n");

	for(i = 0; i < 3; i++)
	{	//입력과 동일한 개념으로 12회 출력함
		for(k = 0; k < 4; k++)
		{
			printf("%3d ", aa[i][k]);
		}
		printf("\n");	//한 행을 출력한 후 줄을 넘김
	}

	return 0;
}
