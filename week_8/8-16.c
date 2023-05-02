#include <stdio.h>

int main()
{
	int aa[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},	//2차원 배열을 초기화함
		{9, 10, 11, 12}
	};

	int i, k;
	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");

	for(i = 0; i < 3; i++)
	{	//2차원 배열에 저장된 값을 출력함
		for(k = 0; k < 4; k++)
		{
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}

	return 0;
}
