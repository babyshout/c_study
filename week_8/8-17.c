#include <stdio.h>

int main()
{
	int gugu[9][9];
	int i, j;

	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			gugu[i][j] = (i + 1) * (j + 1);
		}
	}

	for(i = 0; i < 9; i++)
	{
		for(j = 1; j < 9; j++)
		{
			printf("%dX%d= %2d\t", (j + 1), (i + 1), gugu[j][i]);
		}
		printf("\n");
	}

	return 0;
}
